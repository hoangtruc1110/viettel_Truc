#include <gui/auschoosedocscreen_screen/ausChooseDocScreenView.hpp>
#include <gui/auschoosedocscreen_screen/ausChooseDocScreenPresenter.hpp>
#include "flowDefine.h"
ausChooseDocScreenPresenter::ausChooseDocScreenPresenter(ausChooseDocScreenView& v)
    : view(v)
{

}

void ausChooseDocScreenPresenter::activate()
{

}

void ausChooseDocScreenPresenter::deactivate()
{

}

void ausChooseDocScreenPresenter::selectTrigger(){
	if(view.y_cur == 0){
		setExamFlow(AUS_DOCTOR_TYPE, AUS_HEART);
	}else if(view.y_cur == 1){
		setExamFlow(AUS_DOCTOR_TYPE, AUS_LUNG);
	}
	view.gotoNextScreen();
}
void ausChooseDocScreenPresenter::upTrigger(){
	if(view.y_cur > 0){
		view.y_cur--;
	}
	view.updateFocus();
}
void ausChooseDocScreenPresenter::rightTrigger(){

}
void ausChooseDocScreenPresenter::downTrigger(){
	if(view.y_cur < view.y_max){
		view.y_cur++;
	}
	view.updateFocus();
}
void ausChooseDocScreenPresenter::leftTrigger(){

}
void ausChooseDocScreenPresenter::backTrigger(){

}
void ausChooseDocScreenPresenter::homeTrigger(){

}

void ausChooseDocScreenPresenter::setExamFlow(uint8_t flowType, uint8_t value){
	model->examFlow[flowType] = value;
}
