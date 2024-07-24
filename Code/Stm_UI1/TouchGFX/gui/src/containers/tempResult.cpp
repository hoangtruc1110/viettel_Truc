#include <gui/containers/tempResult.hpp>
#include <touchgfx/Color.hpp>
tempResult::tempResult()
{

}

void tempResult::initialize()
{
    tempResultBase::initialize();
}

void tempResult::updateResult(float valueF){
	colortype color;
	colortype colorBackGround;
	if(valueF < 97 or valueF > 106){
		color = touchgfx::Color::getColorFromRGB(0xFF, 0x1E, 0x1E);
		colorBackGround = touchgfx::Color::getColorFromRGB(0x1B, 0x10, 0x10);
	}else if (valueF > 99 and valueF < 102.5){
		color = touchgfx::Color::getColorFromRGB(0x00, 0xFF, 0x47);
		colorBackGround = touchgfx::Color::getColorFromRGB(14, 29, 18);
	}else{
		color = touchgfx::Color::getColorFromRGB(0xF3, 0x70, 0x20);
		colorBackGround = touchgfx::Color::getColorFromRGB(68, 38, 19);
	}

	touchgfx::Unicode::snprintfFloat(textArea1Buffer,TEXTAREA1_SIZE,"%f F", valueF );
	textArea1.setColor(color);
	textArea1.invalidate();
	circle1Painter.setColor(colorBackGround);
	circle1.invalidate();
}
