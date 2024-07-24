/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : app_freertos.c
  * Description        : FreeRTOS applicative file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "app_freertos.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "app_touchgfx.h"
#include "st7789.h"
#include <stdio.h>
#include <string.h>
#include <stm32u5xx_hal_uart.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */
/* Private variables ---------------------------------------------------------*/
uint16_t uart_Data;
int converted_val;

uint8_t RxData[257];
uartData_t *uartData_q;

extern UART_HandleTypeDef huart3;
/* Definitions for myQueue01 */
osMessageQueueId_t myQueue01Handle;
const osMessageQueueAttr_t myQueue01_attributes = {
  .name = "myQueue01"
};
/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};
/* Definitions for receiveUarrt1Task */
osThreadId_t receiveUarrt1TaskHandle;
const osThreadAttr_t receiveUarrt1Task_attributes = {
  .name = "receiveUarrt1Task",
  .priority = (osPriority_t) osPriorityLow,
  .stack_size = 128 * 4
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */
osThreadId_t guiTaskHandle;
const osThreadAttr_t guiTask_attributes = {
  .name = "guiTask",
  .priority = (osPriority_t) osPriorityHigh,
  .stack_size = 4096
};

osThreadId_t refreshGuiTaskHandle;
const osThreadAttr_t refreshGuiTask_attributes = {
  .name = "refreshGuiTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};

/* USER CODE END FunctionPrototypes */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */


  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
	  /* creation of myQueue01 */
	myQueue01Handle = osMessageQueueNew (16, sizeof(uartData_t), &myQueue01_attributes);
  /* USER CODE END RTOS_QUEUES */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of receiveUarrt1Task */
//  receiveUarrt1TaskHandle = osThreadNew(StartTask02, NULL, &receiveUarrt1Task_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  guiTaskHandle = osThreadNew(TouchGFX_Task, NULL, &guiTask_attributes);
  refreshGuiTaskHandle = osThreadNew(StartRefreshGuitTask, NULL, &refreshGuiTask_attributes);


  /* creation of receiveUarrt1Task */
//  receiveUarrt1TaskHandle = osThreadNew(uartTask, NULL, &receiveUarrt1Task_attributes);
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}
/* USER CODE BEGIN Header_StartDefaultTask */
void displayImage(const uint16_t* image) {
//    uint16_t img[320 * 240];
//    copy_array(image, img, 320 * 240);
//    ILI9341_PrepareRGB565_ImageArray(320 * 240, img);
//	ILI9341_SetWindow(0,0,240,320);
//	ILI9341_DrawBitmap(240, 320, (uint16_t *)image);
    ST7789_DrawImage(0, 0, 240, 320, (uint8_t *)image);
}

extern void touchgfxSignalVSync(void);
void handleButtonPress(void) {
    if (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_SET) {
        HAL_Delay(50);
//        current_image_index = (current_image_index + 1) % (sizeof(images) / sizeof(images[0]));
//        displayImage(images[current_image_index]);
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);

        while (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_SET) {
            HAL_Delay(50);
        }
//        touchgfxSignalVSync();
    }
}

/**
* @brief Function implementing the defaultTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN defaultTask */
//	touchgfxSignalVSync();
	HAL_UARTEx_ReceiveToIdle_IT(&huart3, RxData, 256);
  /* Infinite loop */
  for(;;)
  {
//	  HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
//	  handleButtonPress();
    osDelay(100);
  }
  /* USER CODE END defaultTask */
}

/* USER CODE BEGIN Header_StartTask02 */
/**
* @brief Function implementing the receiveUarrt1Task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTask02 */
void StartTask02(void *argument)
{
  /* USER CODE BEGIN receiveUarrt1Task */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END receiveUarrt1Task */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */
void StartRefreshGuitTask(void *argument){
	for(;;)
	  {
		touchgfxSignalVSync();
	    osDelay(1);
	  }
}

void uartTask(void *argument)
{
//	uint8_t *data_receive;
	for(;;)
	  {
//		HAL_UART_Receive(&huart3, data_receive, sizeof(data_receive), 5000/portTICK_RATE_MS);
//		osMessageQueuePut(myQueue01Handle, &data_receive, 0, 0);
//		osDelay(1);
	  }
}


void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size)
{
    static uartData_t uartData;
    if (huart->Instance == USART3)
    {
        RxData[Size] = '\0';
        strncpy(uartData.Data, (char *)RxData, Size+1);
        uartData.size = Size+1;
        osMessageQueuePut(myQueue01Handle, &uartData, 0, 0);
        HAL_UARTEx_ReceiveToIdle_IT(&huart3, RxData, 256);
    }

}

/* USER CODE END Application */

