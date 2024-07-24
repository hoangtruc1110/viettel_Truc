#include <gui/containers/tempProcess.hpp>

tempProcess::tempProcess()
{

}

void tempProcess::initialize()
{
    tempProcessBase::initialize();
}

void tempProcess::setProcessNumber(uint8_t value){
	touchgfx::Unicode::snprintf(textProcessNameBuffer,TEXTPROCESSNAME_SIZE,"%d", value);
	textProcessName.invalidate();
}

void tempProcess::setDoneProcess(){
	circleDone.setVisible(true);
	circleDone.invalidate();
}
void tempProcess::setChoosenProcess(uint8_t value){
	circleTick.setVisible(value);
	circleTick.invalidate();
}
