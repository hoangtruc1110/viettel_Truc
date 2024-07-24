#ifndef CONNECTEDWIFIPRESENTER_HPP
#define CONNECTEDWIFIPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class connectedWiFiView;

class connectedWiFiPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    connectedWiFiPresenter(connectedWiFiView& v);

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

    virtual ~connectedWiFiPresenter() {}

private:
    connectedWiFiPresenter();

    connectedWiFiView& view;
};

#endif // CONNECTEDWIFIPRESENTER_HPP
