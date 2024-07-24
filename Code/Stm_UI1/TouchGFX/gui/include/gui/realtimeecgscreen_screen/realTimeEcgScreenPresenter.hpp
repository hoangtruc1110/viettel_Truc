#ifndef REALTIMEECGSCREENPRESENTER_HPP
#define REALTIMEECGSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class realTimeEcgScreenView;

class realTimeEcgScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    realTimeEcgScreenPresenter(realTimeEcgScreenView& v);

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

    virtual ~realTimeEcgScreenPresenter() {}

private:
    realTimeEcgScreenPresenter();

    realTimeEcgScreenView& view;
};

#endif // REALTIMEECGSCREENPRESENTER_HPP
