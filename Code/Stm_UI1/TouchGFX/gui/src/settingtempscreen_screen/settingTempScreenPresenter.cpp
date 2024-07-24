#include <gui/settingtempscreen_screen/settingTempScreenView.hpp>
#include <gui/settingtempscreen_screen/settingTempScreenPresenter.hpp>

settingTempScreenPresenter::settingTempScreenPresenter(settingTempScreenView& v)
    : view(v)
{

}

void settingTempScreenPresenter::activate()
{

}

void settingTempScreenPresenter::deactivate()
{

}
void settingTempScreenPresenter::upTrigger(){
	if(view.y_cur > 0){
		view.y_cur--;
		view.updateFocus();
		setTempUnit();
	}
}
void settingTempScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
		view.updateFocus();
		setTempUnit();
	}
}

void settingTempScreenPresenter::setTempUnit(){

}
