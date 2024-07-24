#ifndef SETUPWIFISCREENPRESENTER_HPP
#define SETUPWIFISCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class setUpWiFiScreenView;

class setUpWiFiScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    setUpWiFiScreenPresenter(setUpWiFiScreenView& v);

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

    virtual ~setUpWiFiScreenPresenter() {}

private:
    setUpWiFiScreenPresenter();

    setUpWiFiScreenView& view;
};

#endif // SETUPWIFISCREENPRESENTER_HPP
