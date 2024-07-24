#include <gui/settingscreen_screen/settingScreenView.hpp>
#include <gui/settingscreen_screen/settingScreenPresenter.hpp>

settingScreenPresenter::settingScreenPresenter(settingScreenView& v)
    : view(v)
{

}

void settingScreenPresenter::activate()
{

}

void settingScreenPresenter::deactivate()
{

}

void settingScreenPresenter::upTrigger(){
	if(view.y_cur > 0){
		view.y_cur--;
		view.updatefocus();
	}
	else{
		if(view.lastItemId > 4){
			view.lastItemId--;
			view.updateItem();
		}
	}

}
void settingScreenPresenter::rightTrigger(){}
void settingScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
		view.updatefocus();
	}
	else{
		if(view.lastItemId < sizeof(view.settingIcon)/sizeof(view.settingIcon[0]) -1){
			view.lastItemId++;
			view.updateItem();
		}
	}
}
void settingScreenPresenter::leftTrigger(){}
void settingScreenPresenter::selectTrigger(){
	view.gotoNextScreen();
}
void settingScreenPresenter::backTrigger(){
	view.gotoPreviousScreen();
}
void settingScreenPresenter::homeTrigger(){}
