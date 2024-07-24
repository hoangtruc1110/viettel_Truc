#include <gui/examinationscreen_screen/examinationScreenView.hpp>
#include <gui/examinationscreen_screen/examinationScreenPresenter.hpp>
#include "flowDefine.h"
examinationScreenPresenter::examinationScreenPresenter(examinationScreenView& v)
    : view(v)
{

}

void examinationScreenPresenter::activate()
{

}

void examinationScreenPresenter::deactivate()
{

}

static uint16_t valueW = 1000;
static uint16_t valueB = 1000;

void examinationScreenPresenter::readWiFiRSSI()
{
	view.updateWiFiIcon(valueW/100);
	valueW++;
}

void examinationScreenPresenter::readBattery()
{
	view.updateBatIcon(valueB/100);
	valueB++;
}

void examinationScreenPresenter::upTrigger()
{
	if(view.y_cur > 0 && view.y_cur <= view.y_max)
		view.y_cur--;
	if(view.y_cur == 0)
		view.x_cur = 0;
	view.updateFocus();
}

void examinationScreenPresenter::rightTrigger(){
	if(view.x_cur >= 0 && view.x_cur < view.x_max)
		view.x_cur++;
	if(view.y_cur == 0)
		view.x_cur = 0;
	view.updateFocus();
}
void examinationScreenPresenter::downTrigger(){
	if(view.y_cur >= 0 && view.y_cur < view.y_max)
		view.y_cur++;
	view.updateFocus();
}
void examinationScreenPresenter::leftTrigger(){
	if(view.x_cur > 0 && view.x_cur <= view.x_max)
		view.x_cur--;
	view.updateFocus();
}
void examinationScreenPresenter::selectTrigger(){
	int8_t screenID = -1;
	if (view.x_cur == 0 && view.y_cur == 0) {
		screenID = 0;
	}
	if (view.x_cur == 0 && view.y_cur == 1){
		screenID = 1;
		setExamFlow(EXAM_TYPE, TEMP_FLOW_IR_VALUE);
	}else if (view.x_cur == 1 && view.y_cur == 1){
		screenID = 1;
		setExamFlow(EXAM_TYPE, SPO2_FLOW_VALUE);
	}else if (view.x_cur == 0 && view.y_cur == 2){
		if(!isDoctor()){
			screenID = 3;
		}else{
			screenID = 4;
		}
		setExamFlow(EXAM_TYPE, AUS_FLOW_VALUE);
	}else if (view.x_cur == 1 && view.y_cur == 2){
		screenID = 1;
		setExamFlow(EXAM_TYPE, ECG_FLOW_VALUE);
	}
	view.gotoNextScreen(screenID);
}

uint8_t* examinationScreenPresenter::getExamState(){
	return model->examState;
}

uint8_t* examinationScreenPresenter::getExamFlow(){
	return model->examFlow;
}

void examinationScreenPresenter::setExamFlow(uint8_t flowType, uint8_t value){
	model->examFlow[flowType] = value;
}
bool examinationScreenPresenter::isDoctor(){
	return model->isDoctor;
}
