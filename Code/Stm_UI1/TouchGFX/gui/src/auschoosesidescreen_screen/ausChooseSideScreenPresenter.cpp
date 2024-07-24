#include <gui/auschoosesidescreen_screen/ausChooseSideScreenView.hpp>
#include <gui/auschoosesidescreen_screen/ausChooseSideScreenPresenter.hpp>
#include "textUI.h"
#include "flowDefine.h"
ausChooseSideScreenPresenter::ausChooseSideScreenPresenter(ausChooseSideScreenView& v)
    : view(v)
{

}

void ausChooseSideScreenPresenter::activate()
{

}

void ausChooseSideScreenPresenter::deactivate()
{

}

void ausChooseSideScreenPresenter::rightTrigger(){
	if(view.x_cur < view.x_max){
		view.x_cur++;
	}
	updateChooseView();
}
void ausChooseSideScreenPresenter::leftTrigger(){
	if(view.x_cur > 0){
		view.x_cur--;
	}
	updateChooseView();
}
void ausChooseSideScreenPresenter::selectTrigger(){
	if(view.x_cur == 0){
		setExamFlow(AUS_OWNER_TYPE, AUS_LEFT_SIDE);
	}else if (view.x_cur == 1){
		setExamFlow(AUS_OWNER_TYPE, AUS_RIGHT_SIDE);
	}
	view.gotoNextScreen();
}
void ausChooseSideScreenPresenter::homeTrigger(){
//	presenter->homeTrigger();
}
void ausChooseSideScreenPresenter::backTrigger(){
//	presenter->backTrigger();
}


void ausChooseSideScreenPresenter::updateChooseView(){
	unchooseAll();
	if(view.x_cur == 0){
		view.chooseLeftSide(true);
	}else if (view.x_cur == 1){
		view.chooseRightSide(true);
	}
}
void ausChooseSideScreenPresenter::unchooseAll(){
	view.chooseRightSide(false);
	view.chooseLeftSide(false);
}

void ausChooseSideScreenPresenter::setExamFlow(uint8_t flowType, uint8_t value){
	model->examFlow[flowType] = value;
}
