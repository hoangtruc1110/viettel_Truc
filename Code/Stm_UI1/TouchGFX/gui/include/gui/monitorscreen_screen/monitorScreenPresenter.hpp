#ifndef MONITORSCREENPRESENTER_HPP
#define MONITORSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class monitorScreenView;

class monitorScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    monitorScreenPresenter(monitorScreenView& v);

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

    virtual ~monitorScreenPresenter() {}
    void test();
    void readWiFiRSSI();
    void readBattery();

private:
    monitorScreenPresenter();

    monitorScreenView& view;
};

#endif // MONITORSCREENPRESENTER_HPP
