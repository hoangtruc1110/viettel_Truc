#include <gui/containers/ausChooseDocContainer.hpp>
#include <touchgfx/Color.hpp>
ausChooseDocContainer::ausChooseDocContainer()
{

}

void ausChooseDocContainer::initialize()
{
    ausChooseDocContainerBase::initialize();
}

void ausChooseDocContainer::focus(bool isFocus){
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24);
	changeCurveBoxColor(color);
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
}
void ausChooseDocContainer::markDone(bool isDone){
	tagName.setColor(isDone?touchgfx::Color::getColorFromRGB(0x56, 0xAE, 0xFF):touchgfx::Color::getColorFromRGB(0xFF, 0xFF, 0xFF));
	tagName.invalidate();
	markImg.setVisible(isDone);
	markImg.invalidate();
	image1.setVisible(isDone);
	image1.invalidate();
}
void ausChooseDocContainer::changeCurveBoxColor(colortype color){
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
void ausChooseDocContainer::setText(const char* text){
	touchgfx::Unicode::strncpy(tagNameBuffer, text, TAGNAME_SIZE);
//	tagName.resizeToCurrentText();
	tagName.invalidate();
}
