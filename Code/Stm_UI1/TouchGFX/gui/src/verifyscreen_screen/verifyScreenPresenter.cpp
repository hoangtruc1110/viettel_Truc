#include <gui/verifyscreen_screen/verifyScreenView.hpp>
#include <gui/verifyscreen_screen/verifyScreenPresenter.hpp>
#include "textUI.h"
#include "flowDefine.h"

verifyScreenPresenter::verifyScreenPresenter(verifyScreenView& v)
    : view(v)
{

}

void verifyScreenPresenter::activate()
{

}

void verifyScreenPresenter::deactivate()
{

}

char* verifyScreenPresenter::getVerifyText(){
	return model->verifyScreenText;
}

uint8_t* verifyScreenPresenter::getExamFlow(){
	return model->examFlow;
}

bool verifyScreenPresenter::isDoctor(){
	return model->isDoctor;
}

void verifyScreenPresenter::selectTrigger(){
	uint8_t* flow = getExamFlow();
	view.gotoNextScreen(flow[EXAM_TYPE]);
}

void verifyScreenPresenter::setText(){
	uint8_t* flow = getExamFlow();
	bool isDoctor = this->isDoctor();
	switch(flow[EXAM_TYPE]){
	case TEMP_FLOW_IR_VALUE:
		view.setText(TEMP_VERIFY_IR_TEXT);
		break;
	case TEMP_FLOW_CONTACT_VALUE:
		view.setText(TEMP_VERIFY_CONTACT_TEXT);
		break;
	case SPO2_FLOW_VALUE:
		view.setText(SPO2_VERIFY_OWNER_TEXT);
		break;
	case AUS_FLOW_VALUE:
		if(isDoctor){
			if(flow[AUS_DOCTOR_TYPE] == AUS_HEART)
				view.setText(AUS_VERIFY_DOCTOR_HEART_TEXT);
			else if(flow[AUS_DOCTOR_TYPE] == AUS_LUNG)
				view.setText(AUS_VERIFY_DOCTOR_LUNG_TEXT);
		}else{
			if(flow[AUS_OWNER_TYPE] == AUS_LEFT_SIDE)
				view.setText(AUS_VERIFY_OWNER_TEXT("left"));
			else if(flow[AUS_OWNER_TYPE] == AUS_RIGHT_SIDE)
				view.setText(AUS_VERIFY_OWNER_TEXT("right"));
		}
		break;
	case ECG_FLOW_VALUE:
		view.setText(ECG_VERIFY_TEXT);
		break;
	}
}
