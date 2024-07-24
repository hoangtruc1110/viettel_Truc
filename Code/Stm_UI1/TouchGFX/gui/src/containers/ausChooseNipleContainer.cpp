#include <gui/containers/ausChooseNipleContainer.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
ausChooseNipleContainer::ausChooseNipleContainer()
{

}

void ausChooseNipleContainer::initialize()
{
    ausChooseNipleContainerBase::initialize();
}

void ausChooseNipleContainer::changeCurveBoxColor(colortype color){
	circle1Painter.setColor(color);
	circle1_1Painter.setColor(color);
	circle1_2Painter.setColor(color);
	circle1_3Painter.setColor(color);
	box1.setColor(color);

	circle1.invalidate();
	circle1_1.invalidate();
	circle1_2.invalidate();
	circle1_3.invalidate();
	box1.invalidate();
}
void ausChooseNipleContainer::markDone(bool isDone){
	markImg.setVisible(isDone);
	stateImg.setBitmap(Bitmap(isDone?BITMAP_CHECK_CIRCLE_ID:BITMAP_ARROW_ID));

	markImg.invalidate();
	stateImg.invalidate();
}

void ausChooseNipleContainer::focus(bool isFocus){
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x0A, 0x15, 0x1E);
	changeCurveBoxColor(color);
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
}

void ausChooseNipleContainer::setText(const char* text){
	touchgfx::Unicode::strncpy(tagNameBuffer, text, TAGNAME_SIZE);
	tagName.resizeToCurrentText();
	tagName.invalidate();
}
