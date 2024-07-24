#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32u5xx_hal.h"
#include <touchgfx/Color.hpp>

#ifndef SIMULATOR
#include <cmsis_os2.h>
#include "main.h"
#include "app_freertos.h"
#include <stdio.h>
#include <cstring>

extern "C"
{
    extern osMessageQueueId_t myQueue01Handle;
    uartData_t *uartData_r;
}
#endif


Model::Model() : modelListener(0)
{

}


void Model::tick()
{
#ifndef SIMULATOR
//	//Get Data from ADC Queue
//	if (osMessageQueueGet(myQueue01Handle, &uartData_r, 0U, 0) == osOK)
//	{
//		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
//		HAL_Delay(500);
//		strncpy(RData, uartData_r->Data, uartData_r->size);
//		modelListener->uart_Data(RData);  // send data to presenter
//	}

//	if(osMessageQueueGetCount(myQueue01Handle)>0)
//	{
//		if(osMessageQueueGet(myQueue01Handle, &uartData_r, 0, 0)==osOK)
//		{
//			HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
////			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7);
//
//			strncpy(RData, uartData_r->Data, uartData_r->size);
//			modelListener->uart_Data(RData);
//		}
//	}

    uartData_t uartData;
    if (osMessageQueueGet(myQueue01Handle, &uartData, NULL, 0) == osOK)
    {
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
        strncpy(RData, uartData.Data, uartData.size);
        modelListener->uart_Data(RData);
    }
#endif

	modelListener->readBattery();
	modelListener->readWiFiRSSI();
}

void Model::setExamState(uint8_t examNum, uint8_t isDone)
{
	examState[examNum] = isDone;
}

void Model::setVerifyText(char* text){
	sprintf(verifyScreenText, "%s",text);
}
