#ifndef __ST7789_H
#define __ST7789_H

//#include "fonts.h"
#include "main.h"

/* choose a Hardware SPI port to use. */
#define ST7789_SPI_PORT hspi1
extern SPI_HandleTypeDef ST7789_SPI_PORT;

/* choose whether use DMA or not */
#define USE_DMA

/* If u need CS control, comment below*/
//#define CFG_NO_CS

/* Pin connection*/
#define ST7789_RST_PORT GPIOA
#define ST7789_RST_PIN  GPIO_PIN_4
#define ST7789_DC_PORT  GPIOB
#define ST7789_DC_PIN   GPIO_PIN_8

#ifndef CFG_NO_CS
#define ST7789_CS_PORT  GPIOB
#define ST7789_CS_PIN   GPIO_PIN_9
#endif

/* If u need Backlight control, uncomment below */
//#define BLK_PORT
//#define BLK_PIN


/*
 * Comment one to use another.
 * 3 parameters can be choosed
 * 135x240(0.96 inch) & 240x240(1.3inch) & 170x320(1.9inch)
 * X_SHIFT & Y_SHIFT are used to adapt different display's resolution
 */

/* Choose a type you are using */
//#define USING_135X240
//#define USING_240X240
#define USING_240X320
//#define USING_170X320

/* Choose a display rotation you want to use: (0-3) */
//#define ST7789_ROTATION 0
//#define ST7789_ROTATION 1
#define ST7789_ROTATION 2				//  use Normally on 240x240
//#define ST7789_ROTATION 3

#ifdef USING_135X240

    #if ST7789_ROTATION == 0
        #define ST7789_WIDTH 135
        #define ST7789_HEIGHT 240
        #define X_SHIFT 53
        #define Y_SHIFT 40
    #endif

    #if ST7789_ROTATION == 1
        #define ST7789_WIDTH 240
        #define ST7789_HEIGHT 135
        #define X_SHIFT 40
        #define Y_SHIFT 52
    #endif

    #if ST7789_ROTATION == 2
        #define ST7789_WIDTH 135
        #define ST7789_HEIGHT 240
        #define X_SHIFT 52
        #define Y_SHIFT 40
    #endif

    #if ST7789_ROTATION == 3
        #define ST7789_WIDTH 240
        #define ST7789_HEIGHT 135
        #define X_SHIFT 40
        #define Y_SHIFT 53
    #endif

#endif

#ifdef USING_240X240

    #define ST7789_WIDTH 240
    #define ST7789_HEIGHT 240

		#if ST7789_ROTATION == 0
			#define X_SHIFT 0
			#define Y_SHIFT 80
		#elif ST7789_ROTATION == 1
			#define X_SHIFT 80
			#define Y_SHIFT 0
		#elif ST7789_ROTATION == 2
			#define X_SHIFT 0
			#define Y_SHIFT 0
		#elif ST7789_ROTATION == 3
			#define X_SHIFT 0
			#define Y_SHIFT 0
		#endif

#endif

#ifdef USING_240X320

	#if ST7789_ROTATION == 0
		#define ST7789_WIDTH 240
		#define ST7789_HEIGHT 320
		#define X_SHIFT 0
		#define Y_SHIFT 0
	#endif

	#if ST7789_ROTATION == 1
		#define ST7789_WIDTH 320
		#define ST7789_HEIGHT 240
		#define X_SHIFT 0
		#define Y_SHIFT 0
	#endif

	#if ST7789_ROTATION == 2
		#define ST7789_WIDTH 240
		#define ST7789_HEIGHT 320
		#define X_SHIFT 0
		#define Y_SHIFT 0
	#endif

	#if ST7789_ROTATION == 3
		#define ST7789_WIDTH 320
		#define ST7789_HEIGHT 240
		#define X_SHIFT 0
		#define Y_SHIFT 0
	#endif

#endif

#ifdef USING_170X320

	#if ST7789_ROTATION == 0
        #define ST7789_WIDTH 170
        #define ST7789_HEIGHT 320
        #define X_SHIFT 35
        #define Y_SHIFT 0
    #endif

    #if ST7789_ROTATION == 1
        #define ST7789_WIDTH 320
        #define ST7789_HEIGHT 170
        #define X_SHIFT 0
        #define Y_SHIFT 35
    #endif

    #if ST7789_ROTATION == 2
        #define ST7789_WIDTH 170
        #define ST7789_HEIGHT 320
        #define X_SHIFT 35
        #define Y_SHIFT 0
    #endif

    #if ST7789_ROTATION == 3
        #define ST7789_WIDTH 320
        #define ST7789_HEIGHT 170
        #define X_SHIFT 0
        #define Y_SHIFT 35
    #endif

#endif

/**
 *Color of pen
 *If you want to use another color, you can choose one in RGB565 format.
 */

#define WHITE       0xFFFF
#define BLACK       0x0000
#define BLUE        0x001F
#define RED         0xF800
#define MAGENTA     0xF81F
#define GREEN       0x07E0
#define CYAN        0x7FFF
#define YELLOW      0xFFE0
#define GRAY        0X8430
#define BRED        0XF81F
#define GRED        0XFFE0
#define GBLUE       0X07FF
#define BROWN       0XBC40
#define BRRED       0XFC07
#define DARKBLUE    0X01CF
#define LIGHTBLUE   0X7D7C
#define GRAYBLUE    0X5458

#define LIGHTGREEN  0X841F
#define LGRAY       0XC618
#define LGRAYBLUE   0XA651
#define LBBLUE      0X2B12

/* Control Registers and constant codes */
#define ST7789_NOP     0x00
#define ST7789_SWRESET 0x01
#define ST7789_RDDID   0x04
#define ST7789_RDDST   0x09

#define ST7789_SLPIN   0x10
#define ST7789_SLPOUT  0x11
#define ST7789_PTLON   0x12
#define ST7789_NORON   0x13

#define ST7789_INVOFF  0x20
#define ST7789_INVON   0x21
#define ST7789_DISPOFF 0x28
#define ST7789_DISPON  0x29
#define ST7789_CASET   0x2A
#define ST7789_RASET   0x2B
#define ST7789_RAMWR   0x2C
#define ST7789_RAMRD   0x2E

#define ST7789_PTLAR   0x30
#define ST7789_COLMOD  0x3A
#define ST7789_MADCTL  0x36



////////////////////////////
#define ILI9341_SOFTRESET			0x01
#define ILI9341_READID				0x04
#define ILI9341_READSTATUS			0x09
#define ILI9341_READPOWERMODE		0x0A
#define ILI9341_READMADCTL			0x0B
#define ILI9341_READPIXELFORMAT		0x0C
#define ILI9341_READIMAGEFORMAT		0x0D
#define ILI9341_READSIGNALMODE		0x0E
#define ILI9341_READSELFDIAGNOSTIC	0x0F
#define ILI9341_SLEEPIN				0x10
#define ILI9341_SLEEPOUT			0x11
#define ILI9341_PARTIALMODE			0x12
#define ILI9341_NORMALDISP			0x13
#define ILI9341_INVERTOFF			0x20
#define ILI9341_INVERTON			0x21
#define ILI9341_GAMMASET			0x26
#define ILI9341_DISPLAYOFF			0x28
#define ILI9341_DISPLAYON			0x29
#define ILI9341_COLADDRSET			0x2A
#define ILI9341_PAGEADDRSET			0x2B
#define ILI9341_MEMORYWRITE			0x2C
#define ILI9341_COLORSET			0x2D
#define ILI9341_MEMORYREAD			0x2E
#define ILI9341_PARTIALAREA			0x30
#define ILI9341_VERTICALSCROLING	0x33
#define ILI9341_TEARINGEFFECTOFF	0x34
#define ILI9341_TEARINGEFFECTON		0x35
#define ILI9341_MEMCONTROL			0x36
#define ILI9341_VSCROLLSTARTADDRESS	0x37
#define ILI9341_IDLEMODEOFF			0x38
#define ILI9341_IDLEMODEON			0x39
#define ILI9341_PIXELFORMAT			0x3A
#define ILI9341_WRITEMEMCONTINUE	0x3C
#define ILI9341_READMEMCONTINUE		0x3E
#define ILI9341_SETSCANLINE			0x44
#define ILI9341_GETSCANLINE			0x45
#define ILI9341_WRITEBRIGHTNESS		0x51
#define ILI9341_READBRIGHTNESS		0x52
#define ILI9341_WRITECTRL			0x53
#define ILI9341_READCTRL			0x54
#define ILI9341_WRITECABC			0x55
#define ILI9341_READCABC			0x56
#define ILI9341_WRITECABCMIN		0x5E
#define ILI9341_READCABCMIN			0x5F
#define ILI9341_RGBSIGNALCONTROL	0xB0
#define ILI9341_FRAMECONTROLNORMAL	0xB1
#define ILI9341_FRAMECONTROLIDLE	0xB2
#define ILI9341_FRAMECONTROLPARTIAL	0xB3
#define ILI9341_INVERSIONCONTROL	0xB4
#define ILI9341_BLANKINGPORCHCONT	0xB5
#define ILI9341_DISPLAYFUNC			0xB6
#define ILI9341_ENTRYMODE			0xB7
#define ILI9341_BACKLIGHTCONTROL1	0xB8
#define ILI9341_BACKLIGHTCONTROL2	0xB9
#define ILI9341_BACKLIGHTCONTROL3	0xBA
#define ILI9341_BACKLIGHTCONTROL4	0xBB
#define ILI9341_BACKLIGHTCONTROL5	0xBC
#define ILI9341_BACKLIGHTCONTROL7	0xBE
#define ILI9341_BACKLIGHTCONTROL8	0xBF
#define ILI9341_POWERCONTROL1		0xC0
#define ILI9341_POWERCONTROL2		0xC1
#define ILI9341_VCOMCONTROL1		0xC5
#define ILI9341_VCOMCONTROL2		0xC7
#define ILI9341_POWERCONTROLA		0xCB
#define ILI9341_POWERCONTROLB		0xCF
#define ILI9341_NVMEMORYWRITE		0xD0
#define ILI9341_NVMEMORYKEY			0xD1
#define ILI9341_NVMEMORYSTATUSREAD	0xD2
#define ILI9341_READID4				0xD3
#define ILI9341_READID1				0xDA
#define ILI9341_READID2				0xDB
#define ILI9341_READID3				0xDC
#define ILI9341_POSITIVEGAMMCORR	0xE0
#define ILI9341_NEGATIVEGAMMCORR	0xE1
#define ILI9341_DIGITALGAMMCONTROL1	0xE2
#define ILI9341_DIGITALGAMMCONTROL2	0xE3
#define ILI9341_DRIVERTIMCONTROLA	0xE8
#define ILI9341_DRIVERTIMCONTROLC	0xEA
#define ILI9341_POWERSEQCONTROL		0xED
#define ILI9341_ENABLE3G			0xF2
#define ILI9341_INTERFACECONTROL	0xF6
#define ILI9341_PUMPRATIOCONTROL	0xF7
/**
 * Memory Data Access Control Register (0x36H)
 * MAP:     D7  D6  D5  D4  D3  D2  D1  D0
 * param:   MY  MX  MV  ML  RGB MH  -   -
 *
 */

/* Page Address Order ('0': Top to Bottom, '1': the opposite) */
#define ST7789_MADCTL_MY  0x80
/* Column Address Order ('0': Left to Right, '1': the opposite) */
#define ST7789_MADCTL_MX  0x40
/* Page/Column Order ('0' = Normal Mode, '1' = Reverse Mode) */
#define ST7789_MADCTL_MV  0x20
/* Line Address Order ('0' = LCD Refresh Top to Bottom, '1' = the opposite) */
#define ST7789_MADCTL_ML  0x10
/* RGB/BGR Order ('0' = RGB, '1' = BGR) */
#define ST7789_MADCTL_RGB 0x00

#define ST7789_RDID1   0xDA
#define ST7789_RDID2   0xDB
#define ST7789_RDID3   0xDC
#define ST7789_RDID4   0xDD

/* Advanced options */
#define ST7789_COLOR_MODE_16bit 0x55    //  RGB565 (16bit)
#define ST7789_COLOR_MODE_18bit 0x66    //  RGB666 (18bit)

/* Basic operations */
#define ST7789_RST_Clr() HAL_GPIO_WritePin(ST7789_RST_PORT, ST7789_RST_PIN, GPIO_PIN_RESET)
#define ST7789_RST_Set() HAL_GPIO_WritePin(ST7789_RST_PORT, ST7789_RST_PIN, GPIO_PIN_SET)

#define ST7789_DC_Clr() HAL_GPIO_WritePin(ST7789_DC_PORT, ST7789_DC_PIN, GPIO_PIN_RESET)
#define ST7789_DC_Set() HAL_GPIO_WritePin(ST7789_DC_PORT, ST7789_DC_PIN, GPIO_PIN_SET)
#ifndef CFG_NO_CS
#define ST7789_Select() HAL_GPIO_WritePin(ST7789_CS_PORT, ST7789_CS_PIN, GPIO_PIN_RESET)
#define ST7789_UnSelect() HAL_GPIO_WritePin(ST7789_CS_PORT, ST7789_CS_PIN, GPIO_PIN_SET)
#else
#define ST7789_Select() asm("nop")
#define ST7789_UnSelect() asm("nop")
#endif

#define ABS(x) ((x) > 0 ? (x) : -(x))


/* Basic functions. */
void ST7789_Init(void);
void ST7789_SetRotation(uint8_t m);
void ST7789_Fill_Color(uint16_t color);
void ST7789_DrawPixel(uint16_t x, uint16_t y, uint16_t color);
void ST7789_Fill(uint16_t xSta, uint16_t ySta, uint16_t xEnd, uint16_t yEnd, uint16_t color);
void ST7789_DrawPixel_4px(uint16_t x, uint16_t y, uint16_t color);

/* Graphical functions. */
void ST7789_DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color);
void ST7789_DrawRectangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color);
void ST7789_DrawCircle(uint16_t x0, uint16_t y0, uint8_t r, uint16_t color);
void ST7789_DrawImage(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint8_t *data);
void ST7789_InvertColors(uint8_t invert);

/* Text functions. */
//void ST7789_WriteChar(uint16_t x, uint16_t y, char ch, FontDef font, uint16_t color, uint16_t bgcolor);
//void ST7789_WriteString(uint16_t x, uint16_t y, const char *str, FontDef font, uint16_t color, uint16_t bgcolor);

/* Extented Graphical functions. */
void ST7789_DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color);
void ST7789_DrawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint16_t color);
void ST7789_DrawFilledTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint16_t color);
void ST7789_DrawFilledCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);

/* Command functions */
void ST7789_TearEffect(uint8_t tear);

/* Simple test function. */
void ST7789_Test(void);

#ifndef ST7789_ROTATION
    #error You should at least choose a display rotation!
#endif

#endif
