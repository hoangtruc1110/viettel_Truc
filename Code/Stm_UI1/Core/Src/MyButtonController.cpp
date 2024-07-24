#include <MyButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>

extern "C" {
	extern uint8_t User_ButtonState;
}


void MyButtonController::init()
{
	previousState = 0xFF;
}

bool MyButtonController::sample(uint8_t& key)
{
	if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_SET)
//	if(User_ButtonState)
	{
		if(previousState == 0xFF)
		{
//			HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_7);
			previousState = 0x00;
//			User_ButtonState = 0x00;
			key = 0; // select
			return true;
		}
		return false;
	}
	if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3) == GPIO_PIN_RESET){
		if(previousState == 0xFF)
		{
			previousState = 0x00;
			key = 1; // up
			return true;
		}
		return false;
	}
	if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == GPIO_PIN_RESET){
		if(previousState == 0xFF)
		{
			previousState = 0x00;
			key = 2; // right
			return true;
		}
		return false;
	}
	if(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == GPIO_PIN_RESET){
		if(previousState == 0xFF)
		{
			previousState = 0x00;
			key = 3; // down
			return true;
		}
		return false;
	}
	if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_3) == GPIO_PIN_RESET){
		if(previousState == 0xFF)
		{
			previousState = 0x00;
			key = 4; // left
			return true;
		}
		return false;
	}
	if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_1) == GPIO_PIN_RESET){
		if(previousState == 0xFF)
		{
			previousState = 0x00;
			key = 5; // back
			return true;
		}
		return false;
	}
	if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_0) == GPIO_PIN_RESET){
		if(previousState == 0xFF)
		{
			previousState = 0x00;
			key = 6; // home
			return true;
		}
		return false;
	}
	previousState = 0xFF;
	return false;
}
