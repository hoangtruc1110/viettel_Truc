#include <gui/ecgstartscreen_screen/ecgStartScreenView.hpp>
#include <gui/ecgstartscreen_screen/ecgStartScreenPresenter.hpp>
#include "math.h"
#include "flowDefine.h"
ecgStartScreenPresenter::ecgStartScreenPresenter(ecgStartScreenView& v)
    : view(v)
{

}

void ecgStartScreenPresenter::activate()
{

}

void ecgStartScreenPresenter::deactivate()
{

}

void ecgStartScreenPresenter::selectTrigger(){
	view.setState(1);
}

void ecgStartScreenPresenter::addGraphPoint(){
	view.addGraphPoint(rand() % (100 - 0 + 1) + 0);
}

void ecgStartScreenPresenter::readBPM(){
	view.setBPM(rand() % (100 - 0 + 1) + 0);
}

void ecgStartScreenPresenter::setDoneState(uint8_t isDone){
	model->setExamState(ECG_FLOW, isDone);
}
