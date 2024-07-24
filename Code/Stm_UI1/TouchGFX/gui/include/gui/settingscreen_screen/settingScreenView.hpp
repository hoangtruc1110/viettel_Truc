#ifndef SETTINGSCREENVIEW_HPP
#define SETTINGSCREENVIEW_HPP

#include <gui_generated/settingscreen_screen/settingScreenViewBase.hpp>
#include <gui/settingscreen_screen/settingScreenPresenter.hpp>
#include "BitmapDatabase.hpp"
class settingScreenView : public settingScreenViewBase
{
public:
    settingScreenView();
    virtual ~settingScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void upTrigger();
    void rightTrigger();
    void downTrigger();
    void leftTrigger();
    void selectTrigger();
    void backTrigger();
    void homeTrigger();
    void updateItem();
    void unFocusAll();
    void updatefocus();
    void gotoNextScreen();
    void gotoPreviousScreen();

    static uint8_t y_cur;
    uint8_t y_max;
    const char* settingText[8]={"User Id", "Wi-fi", "Display setting", "Volume control", "Temperature", "Troubleshoot", "Updates", "Reset"};
    const BitmapId settingIcon[8]={BITMAP_USER_LINE_ID,BITMAP_WIFI_LINE_ID, BITMAP_CONTRAST_LINE_ID, BITMAP_VOLUME_DOWN_LINE_ID,
    		BITMAP_TEMP_HOT_FILL_ID, BITMAP_CONTRAST_LINE_ID, BITMAP_LOOP_LEFT_LINE_ID, BITMAP_RESTART_ALT_ID};
    static uint8_t lastItemId;

protected:
};

#endif // SETTINGSCREENVIEW_HPP
