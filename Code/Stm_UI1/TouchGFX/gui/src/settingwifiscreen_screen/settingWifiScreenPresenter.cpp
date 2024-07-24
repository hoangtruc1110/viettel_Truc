#include <gui/settingwifiscreen_screen/settingWifiScreenView.hpp>
#include <gui/settingwifiscreen_screen/settingWifiScreenPresenter.hpp>

settingWifiScreenPresenter::settingWifiScreenPresenter(settingWifiScreenView& v)
    : view(v)
{

}

void settingWifiScreenPresenter::activate()
{

}

void settingWifiScreenPresenter::deactivate()
{

}

void settingWifiScreenPresenter::selectTrigger(){}
void settingWifiScreenPresenter::upTrigger(){
	if(view.y_cur > 1){
		view.y_cur--;
		view.updateFocus();
	}else if(view.y_cur == 1){
		if(view.lastItemId > 2){
			view.lastItemId--;
			view.updateItem();
		}else{
			view.y_cur--;
			view.updateFocus();
		}
	}
}
void settingWifiScreenPresenter::rightTrigger(){}
void settingWifiScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
		view.updateFocus();
	}else{
		if(view.lastItemId < view.wifiNamesLength -1){
			view.lastItemId++;
			view.updateItem();
		}
	}
}
void settingWifiScreenPresenter::leftTrigger(){}
void settingWifiScreenPresenter::backTrigger(){}
void settingWifiScreenPresenter::homeTrigger(){}

void settingWifiScreenPresenter::setWifiNames(char* names[], uint8_t size){
	view.wifiNamesLength = size;
	for(int i = 0; i < view.wifiNamesLength; i++){
		view.wifiNames[i] = names[i];
	}
}
