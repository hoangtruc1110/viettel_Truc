#include <gui/settingdisplayscreen_screen/settingDisplayScreenView.hpp>

settingDisplayScreenView::settingDisplayScreenView():x_cur(0), x_max(1), brightness(50), brightness_max(100), sleep_time(15), sleep_time_max(90)
{

}

void settingDisplayScreenView::setupScreen()
{
    settingDisplayScreenViewBase::setupScreen();
    brightness = 50;
    sleep_time = 15;
    updateFocus();
    updateBrightness();
    updateSleepTime();
}

void settingDisplayScreenView::tearDownScreen()
{
    settingDisplayScreenViewBase::tearDownScreen();
}
void settingDisplayScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void settingDisplayScreenView::homeTrigger(){
	presenter->homeTrigger();
}
void settingDisplayScreenView::backTrigger(){
	application().gotosettingScreenScreenNoTransition();
}
void settingDisplayScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void settingDisplayScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void settingDisplayScreenView::upTrigger(){
	presenter->upTrigger();
}
void settingDisplayScreenView::downTrigger(){
	presenter->downTrigger();
}
void settingDisplayScreenView::updateFocus(){
	unFocusAll();
	if(x_cur==0){
		displayContainer1.focus(true);
	}else{
		displayContainer2.focus(true);
	}
}
void settingDisplayScreenView::unFocusAll(){
	displayContainer1.focus(false);
	displayContainer2.focus(false);
}

void settingDisplayScreenView::updateBrightness(){
	displayContainer1.setValue(brightness, false);
}
void settingDisplayScreenView::updateSleepTime(){
	displayContainer2.setValue(sleep_time, true);
}
