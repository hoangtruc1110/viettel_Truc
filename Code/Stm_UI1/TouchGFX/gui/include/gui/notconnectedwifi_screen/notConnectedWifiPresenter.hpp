#ifndef NOTCONNECTEDWIFIPRESENTER_HPP
#define NOTCONNECTEDWIFIPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class notConnectedWifiView;

class notConnectedWifiPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    notConnectedWifiPresenter(notConnectedWifiView& v);

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

    virtual ~notConnectedWifiPresenter() {}

private:
    notConnectedWifiPresenter();

    notConnectedWifiView& view;
};

#endif // NOTCONNECTEDWIFIPRESENTER_HPP
