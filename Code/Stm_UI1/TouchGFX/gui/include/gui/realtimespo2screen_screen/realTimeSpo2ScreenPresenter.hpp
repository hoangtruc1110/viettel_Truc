#ifndef REALTIMESPO2SCREENPRESENTER_HPP
#define REALTIMESPO2SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class realTimeSpo2ScreenView;

class realTimeSpo2ScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    realTimeSpo2ScreenPresenter(realTimeSpo2ScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~realTimeSpo2ScreenPresenter() {}

private:
    realTimeSpo2ScreenPresenter();

    realTimeSpo2ScreenView& view;
};

#endif // REALTIMESPO2SCREENPRESENTER_HPP
