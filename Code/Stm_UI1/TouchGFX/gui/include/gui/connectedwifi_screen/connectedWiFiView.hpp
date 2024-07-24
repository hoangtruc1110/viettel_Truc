#ifndef CONNECTEDWIFIVIEW_HPP
#define CONNECTEDWIFIVIEW_HPP

#include <gui_generated/connectedwifi_screen/connectedWiFiViewBase.hpp>
#include <gui/connectedwifi_screen/connectedWiFiPresenter.hpp>

class connectedWiFiView : public connectedWiFiViewBase
{
public:
    connectedWiFiView();
    virtual ~connectedWiFiView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONNECTEDWIFIVIEW_HPP
