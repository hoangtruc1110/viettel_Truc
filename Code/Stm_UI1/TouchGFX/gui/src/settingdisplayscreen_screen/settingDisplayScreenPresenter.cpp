#include <gui/settingdisplayscreen_screen/settingDisplayScreenView.hpp>
#include <gui/settingdisplayscreen_screen/settingDisplayScreenPresenter.hpp>

settingDisplayScreenPresenter::settingDisplayScreenPresenter(settingDisplayScreenView& v)
    : view(v)
{

}

void settingDisplayScreenPresenter::activate()
{

}

void settingDisplayScreenPresenter::deactivate()
{

}

void settingDisplayScreenPresenter::selectTrigger(){}
void settingDisplayScreenPresenter::homeTrigger(){}
void settingDisplayScreenPresenter::backTrigger(){}
void settingDisplayScreenPresenter::rightTrigger(){
	if(view.x_cur < view.x_max){
		view.x_cur++;
		view.updateFocus();
	}
}
void settingDisplayScreenPresenter::leftTrigger(){
	if(view.x_cur > 0){
		view.x_cur--;
		view.updateFocus();
	}
}
void settingDisplayScreenPresenter::upTrigger(){
	if(view.x_cur==0){
		if(view.brightness < view.brightness_max){
			view.brightness++;
			view.updateBrightness();
		}
	}else{
		if(view.sleep_time < view.sleep_time_max){
			view.sleep_time+=15;
			view.updateSleepTime();
		}
	}
}
void settingDisplayScreenPresenter::downTrigger(){
	if(view.x_cur==0){
		if(view.brightness > 0){
			view.brightness--;
			view.updateBrightness();
		}
	}else{
		if(view.sleep_time > 15){
			view.sleep_time-=15;
			view.updateSleepTime();
		}
	}
}
