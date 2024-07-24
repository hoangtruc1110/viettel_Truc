#ifndef RFIDSCANSCREENPRESENTER_HPP
#define RFIDSCANSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class rfidScanScreenView;

class rfidScanScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    rfidScanScreenPresenter(rfidScanScreenView& v);

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

    virtual ~rfidScanScreenPresenter() {}

private:
    rfidScanScreenPresenter();

    rfidScanScreenView& view;
};

#endif // RFIDSCANSCREENPRESENTER_HPP
