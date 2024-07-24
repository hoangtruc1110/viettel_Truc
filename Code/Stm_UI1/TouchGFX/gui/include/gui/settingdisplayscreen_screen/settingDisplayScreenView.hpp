#ifndef SETTINGDISPLAYSCREENVIEW_HPP
#define SETTINGDISPLAYSCREENVIEW_HPP

#include <gui_generated/settingdisplayscreen_screen/settingDisplayScreenViewBase.hpp>
#include <gui/settingdisplayscreen_screen/settingDisplayScreenPresenter.hpp>

class settingDisplayScreenView : public settingDisplayScreenViewBase
{
public:
    settingDisplayScreenView();
    virtual ~settingDisplayScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void rightTrigger();
	void leftTrigger();
	void upTrigger();
	void downTrigger();
	void updateFocus();
	void unFocusAll();
	void updateBrightness();
	void updateSleepTime();
	uint8_t x_cur, x_max, brightness, brightness_max, sleep_time, sleep_time_max;
protected:
};

#endif // SETTINGDISPLAYSCREENVIEW_HPP
