#include <gui/tempprobescreen_screen/tempProbeScreenView.hpp>
#include <string.h>
#include <stdio.h>
#include "main.h"
tempProbeScreenView::tempProbeScreenView()
{

}

void tempProbeScreenView::setupScreen()
{
    tempProbeScreenViewBase::setupScreen();

}

void tempProbeScreenView::tearDownScreen()
{
    tempProbeScreenViewBase::tearDownScreen();
}

void tempProbeScreenView::updateResult(float valueF)
{
//    Unicode::snprintf(tempTextBuffer, TEMP_TEXT_SIZE, "%d", newValue);
////    tempText.invalidate();
	tempResult1.updateResult(valueF);
}



void tempProbeScreenView::setUartData(uint32_t uart_data)
{
//	tempText.setValue(uart_data);
//	updateResult(30);
//	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_7);
//	tempText.invalidate();
}

void tempProbeScreenView::gotoNextScreen()
{
	application().gototempResultScreenScreenNoTransition();
}



void tempProbeScreenView::uart_Data(char *data)
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
	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);

	updateResult(temp);
}

