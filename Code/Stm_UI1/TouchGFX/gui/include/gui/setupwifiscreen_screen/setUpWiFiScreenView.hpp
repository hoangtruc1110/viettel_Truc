#ifndef SETUPWIFISCREENVIEW_HPP
#define SETUPWIFISCREENVIEW_HPP

#include <gui_generated/setupwifiscreen_screen/setUpWiFiScreenViewBase.hpp>
#include <gui/setupwifiscreen_screen/setUpWiFiScreenPresenter.hpp>

class setUpWiFiScreenView : public setUpWiFiScreenViewBase
{
public:
    setUpWiFiScreenView();
    virtual ~setUpWiFiScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void changeQRCode();
    void selectTrigger();
	void homeTrigger();
	void backTrigger();
protected:
};

#endif // SETUPWIFISCREENVIEW_HPP
