#include <gui/containers/profileItemContainer.hpp>
#include <touchgfx/Color.hpp>
profileItemContainer::profileItemContainer()
{

}

void profileItemContainer::initialize()
{
    profileItemContainerBase::initialize();
}

void profileItemContainer::focus(bool isFocus){
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24);
	changeCurveBoxColor(color);
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
}

void profileItemContainer::changeCurveBoxColor(colortype color){
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
void profileItemContainer::setText(const char* text){
	touchgfx::Unicode::strncpy(profileNameBuffer, text, PROFILENAME_SIZE);
//	tagName.resizeToCurrentText();
	profileName.invalidate();
}
