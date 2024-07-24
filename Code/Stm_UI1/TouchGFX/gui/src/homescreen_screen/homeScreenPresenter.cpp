#include <gui/homescreen_screen/homeScreenView.hpp>
#include <gui/homescreen_screen/homeScreenPresenter.hpp>

homeScreenPresenter::homeScreenPresenter(homeScreenView& v)
    : view(v)
{

}

void homeScreenPresenter::activate()
{

}

void homeScreenPresenter::deactivate()
{

}

void homeScreenPresenter::selectTrigger(){
	view.gotoNextScreen();
}
void homeScreenPresenter::upTrigger(){
	if(view.y_cur > 0){
		view.y_cur--;
		view.updateFocus();
	}
}
void homeScreenPresenter::rightTrigger(){
	if(view.y_cur == 1 && view.x_cur < view.x_max){
		view.x_cur++;
		view.updateFocus();
	}
}
void homeScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
		view.updateFocus();
	}
}
void homeScreenPresenter::leftTrigger(){
	if(view.y_cur == 1 && view.x_cur > 0){
		view.x_cur--;
		view.updateFocus();
	}
}
void homeScreenPresenter::backTrigger(){}
void homeScreenPresenter::homeTrigger(){}
