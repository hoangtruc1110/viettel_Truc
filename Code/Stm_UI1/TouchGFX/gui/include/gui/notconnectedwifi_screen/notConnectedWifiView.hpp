#ifndef NOTCONNECTEDWIFIVIEW_HPP
#define NOTCONNECTEDWIFIVIEW_HPP

#include <gui_generated/notconnectedwifi_screen/notConnectedWifiViewBase.hpp>
#include <gui/notconnectedwifi_screen/notConnectedWifiPresenter.hpp>

class notConnectedWifiView : public notConnectedWifiViewBase
{
public:
    notConnectedWifiView();
    virtual ~notConnectedWifiView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // NOTCONNECTEDWIFIVIEW_HPP
