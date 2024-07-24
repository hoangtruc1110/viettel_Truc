#include <gui/heartbreakstartscreen_screen/heartBreakStartScreenView.hpp>
#include <gui/heartbreakstartscreen_screen/heartBreakStartScreenPresenter.hpp>
#include "flowDefine.h"
heartBreakStartScreenPresenter::heartBreakStartScreenPresenter(heartBreakStartScreenView& v)
    : view(v)
{

}

void heartBreakStartScreenPresenter::activate()
{

}

void heartBreakStartScreenPresenter::deactivate()
{

}

void heartBreakStartScreenPresenter::selectTrigger(){
	if(view.isDone)
//	view.changeState(1);
		view.gotoNextScreen();
	else{
		if(isDoctor())
			view.changeState(1);
	}
}
static int x = 0;
static int y = 0;
void heartBreakStartScreenPresenter::readBPM(){
	x++;
	view.setBPM(x*10);
}
void heartBreakStartScreenPresenter::readSPO2(){
	y++;
	view.setSPO2(y*10);
}

bool heartBreakStartScreenPresenter::isDoctor(){
	return model->isDoctor;
}
void heartBreakStartScreenPresenter::setDoneState(uint8_t isDone){
	model->setExamState(SPO2_FLOW, isDone);
}

void heartBreakStartScreenPresenter::uart_Data(char *data)
{
	view.uart_Data(data);
}

