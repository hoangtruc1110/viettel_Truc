/* Functions called by the TouchGFX HAL to invoke the actual data transfer to ILI9341.
 * Pero, 2021
 */
//#ifdef ST7789
#include "st7789.h"
//#else
//#include "ili9341.h"
//#endif
#include "TouchGFX_DataTransfer.h"

extern void DisplayDriver_TransferCompleteCallback();

static uint8_t isTransmittingData = 0;

uint32_t touchgfxDisplayDriverTransmitActive(void)
{
	return isTransmittingData;
}


void touchgfxDisplayDriverTransmitBlock(uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h)
{
	isTransmittingData = 1;
//#ifdef ST7789
	ST7789_DrawImage(x, y, w, h, pixels);
//#else
//	ILI9341_SetWindow(x, y, x+w-1, y+h-1);
//	ILI9341_DrawBitmap(w, h, pixels);
//#endif

}

void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
{
	if (hspi->Instance == SPI1) {
//		ILI9341_EndOfDrawBitmap();
		isTransmittingData = 0;
//		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_7);
		DisplayDriver_TransferCompleteCallback();
	}
}
