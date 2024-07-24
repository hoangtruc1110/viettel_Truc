#include <gui/tempresultscreen_screen/tempResultScreenView.hpp>
#include <string.h>
#include <stdio.h>
tempResultScreenView::tempResultScreenView()
{

}

void tempResultScreenView::setupScreen()
{
    tempResultScreenViewBase::setupScreen();
}

void tempResultScreenView::tearDownScreen()
{
    tempResultScreenViewBase::tearDownScreen();
}

void tempResultScreenView::gotoNextScreen(){
	presenter->setDoneState(1);
	application().gotoexaminationScreenScreenNoTransition();
}

void tempResultScreenView::updateResult(float valueF){
	tempResult1.updateResult(valueF);
}

void tempResultScreenView::selectTrigger(){
	presenter->selectTrigger();
}


void tempResultScreenView::uart_Data(char *data)
{
	int temp;
	char *temp_str;

	// Tìm vị trí của chuỗi "temp: "
	temp_str = strstr(data, "temp: ");
	if (temp_str)
	{
		// Trích xuất giá trị của temp
		sscanf(temp_str, "temp: %d", &temp);
	}

	updateResult(temp);
}
