#include <gui/auschooseniplescreen_screen/ausChooseNipleScreenView.hpp>
#include <gui/auschooseniplescreen_screen/ausChooseNipleScreenPresenter.hpp>
#include  "flowDefine.h"
ausChooseNipleScreenPresenter::ausChooseNipleScreenPresenter(ausChooseNipleScreenView& v)
    : view(v)
{

}

void ausChooseNipleScreenPresenter::activate()
{

}

void ausChooseNipleScreenPresenter::deactivate()
{

}

void ausChooseNipleScreenPresenter::upTrigger(){
	if(view.y_cur > 0){
		view.y_cur--;
	}
	view.updateFocus();
}
void ausChooseNipleScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
	}
	view.updateFocus();
}
void ausChooseNipleScreenPresenter::selectTrigger(){
	if(view.y_cur == 0){
		model->examFlow[AUS_NIPPLE_FLOW] = AUS_NIPPLE_M;
	}else if(view.y_cur == 1){
		model->examFlow[AUS_NIPPLE_FLOW] = AUS_NIPPLE_L1;
	}
	view.gotoNextScreen();
}
void ausChooseNipleScreenPresenter::homeTrigger(){
//	presenter->homeTrigger();
}
void ausChooseNipleScreenPresenter::backTrigger(){
//	presenter->backTrigger();
}
