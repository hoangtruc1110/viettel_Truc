#include <gui/tempprocessscreen_screen/tempProcessScreenView.hpp>

tempProcessScreenView::tempProcessScreenView()
{

}

void tempProcessScreenView::setupScreen()
{
    tempProcessScreenViewBase::setupScreen();
    tempProcess1.setProcessNumber(1);
	tempProcess2.setProcessNumber(2);
	tempProcess3.setProcessNumber(3);
	tempProcess1.setChoosenProcess(true);
}

void tempProcessScreenView::tearDownScreen()
{
    tempProcessScreenViewBase::tearDownScreen();
}
static uint8_t value = 0;
void tempProcessScreenView::setState(){
	value++;
	if(value == 1){
		tempProcess1.setDoneProcess();
		tempProcess1.setChoosenProcess(false);
		tempProcess2.setChoosenProcess(true);
	}else if(value == 2){
		tempProcess2.setDoneProcess();
		tempProcess2.setChoosenProcess(false);
		tempProcess3.setChoosenProcess(true);
	}
	else{
		application().gototempResultScreenScreenNoTransition();
	}
}
