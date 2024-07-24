#include <gui/tempresultscreen_screen/tempResultScreenView.hpp>
#include <gui/tempresultscreen_screen/tempResultScreenPresenter.hpp>
#include "flowDefine.h"
tempResultScreenPresenter::tempResultScreenPresenter(tempResultScreenView& v)
    : view(v)
{

}

void tempResultScreenPresenter::activate()
{

}

void tempResultScreenPresenter::deactivate()
{

}

void tempResultScreenPresenter::setDoneState(uint8_t isDone){
	model->setExamState(TEMP_FLOW, isDone);
}

void tempResultScreenPresenter::selectTrigger(){
	view.gotoNextScreen();
}

void tempResultScreenPresenter::updateResult(float valueF){
	view.updateResult(valueF);
}

void tempResultScreenPresenter::uart_Data(char *data)
{
	view.uart_Data(data);
}
