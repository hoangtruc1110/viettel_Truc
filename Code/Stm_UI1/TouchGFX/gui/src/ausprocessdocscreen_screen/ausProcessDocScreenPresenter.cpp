#include <gui/ausprocessdocscreen_screen/ausProcessDocScreenView.hpp>
#include <gui/ausprocessdocscreen_screen/ausProcessDocScreenPresenter.hpp>

ausProcessDocScreenPresenter::ausProcessDocScreenPresenter(ausProcessDocScreenView& v)
    : view(v)
{

}

void ausProcessDocScreenPresenter::activate()
{

}

void ausProcessDocScreenPresenter::deactivate()
{

}

void ausProcessDocScreenPresenter::selectTrigger(){

}
void ausProcessDocScreenPresenter::upTrigger(){
	if(view.y_cur > 0){
		view.y_cur--;
		view.updateFocus();
	}
}
void ausProcessDocScreenPresenter::rightTrigger(){
	if(view.x_cur < view.x_max){
		view.x_cur++;
		view.updateFocus();
	}
}
void ausProcessDocScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
		view.updateFocus();
	}
}
void ausProcessDocScreenPresenter::leftTrigger(){
	if(view.x_cur > 0){
		view.x_cur--;
		view.updateFocus();
	}
}
void ausProcessDocScreenPresenter::backTrigger(){}
void ausProcessDocScreenPresenter::homeTrigger(){}
