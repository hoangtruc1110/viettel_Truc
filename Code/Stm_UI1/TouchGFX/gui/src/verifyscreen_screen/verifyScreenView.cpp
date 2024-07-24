#include <gui/verifyscreen_screen/verifyScreenView.hpp>
#include "flowDefine.h"

verifyScreenView::verifyScreenView()
{

}

void verifyScreenView::setupScreen()
{
    verifyScreenViewBase::setupScreen();
//    setText(presenter->getVerifyText());
    presenter->setText();
}

void verifyScreenView::tearDownScreen()
{
    verifyScreenViewBase::tearDownScreen();
}

void verifyScreenView::setText(const char* text){
	touchgfx::Unicode::strncpy(textInfoBuffer, text, TEXTINFO_SIZE);
	//    textInfo.resizeToCurrentText(); // optional, will resize the box to fit the text if it is too small
	textInfo.invalidate();
}


void verifyScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void verifyScreenView::gotoNextScreen(uint8_t id){
	bool isDoctor = presenter->isDoctor();
	switch(id){
	case TEMP_FLOW_IR_VALUE:
		application().gototempProcessScreenScreenNoTransition();
		break;
	case TEMP_FLOW_CONTACT_VALUE:
		application().gototempProbeScreenScreenNoTransition();
		break;
	case SPO2_FLOW_VALUE:
		application().gotoheartBreakStartScreenScreenNoTransition();
		break;
	case AUS_FLOW_VALUE:
		if(isDoctor){
			application().gotoausProcessDocScreenScreenNoTransition();
		}else{
			application().gotoausChooseNipleScreenScreenNoTransition();
		}
		break;
	case ECG_FLOW_VALUE:
		application().gotoecgStartScreenScreenNoTransition();
		break;
	}
}
