#ifndef SETTINGWIFISCREENVIEW_HPP
#define SETTINGWIFISCREENVIEW_HPP

#include <gui_generated/settingwifiscreen_screen/settingWifiScreenViewBase.hpp>
#include <gui/settingwifiscreen_screen/settingWifiScreenPresenter.hpp>

class settingWifiScreenView : public settingWifiScreenViewBase
{
public:
    settingWifiScreenView();
    virtual ~settingWifiScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
    void upTrigger();
    void rightTrigger();
    void downTrigger();
    void leftTrigger();
    void backTrigger();
    void homeTrigger();
    void gotoNextScreen();
    void updateFocus();
    void unFocusAll();
    void setCurrentWifi(const char* text);
    void setPreviousWifi();
    void updateItem();
    uint8_t y_cur, y_max;
    char* wifiNames[10];
    uint8_t wifiNamesLength = 0;
    uint8_t lastItemId = 2;
protected:
};

#endif // SETTINGWIFISCREENVIEW_HPP
