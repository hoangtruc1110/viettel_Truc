#ifndef TEMPCONNECTSCREENPRESENTER_HPP
#define TEMPCONNECTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class tempConnectScreenView;

class tempConnectScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    tempConnectScreenPresenter(tempConnectScreenView& v);

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

    virtual ~tempConnectScreenPresenter() {}

private:
    tempConnectScreenPresenter();

    tempConnectScreenView& view;
};

#endif // TEMPCONNECTSCREENPRESENTER_HPP
