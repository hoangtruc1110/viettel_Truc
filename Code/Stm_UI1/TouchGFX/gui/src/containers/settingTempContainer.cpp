#include <gui/containers/settingTempContainer.hpp>
#include <touchgfx/Color.hpp>
settingTempContainer::settingTempContainer()
{

}

void settingTempContainer::initialize()
{
    settingTempContainerBase::initialize();
}

void settingTempContainer::focus(bool isFocus){
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
	tickImg.setVisible(isFocus);
	tickImg.invalidate();
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2f, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1b, 0x24);
	box1.setColor(color);
	circle1Painter.setColor(color);
	circle1_1Painter.setColor(color);
	circle1_2Painter.setColor(color);
	circle1_3Painter.setColor(color);
	box1.invalidate();
	circle1.invalidate();
	circle1_1.invalidate();
	circle1_2.invalidate();
	circle1_3.invalidate();
}
void settingTempContainer::setTagName(const char* name){
	touchgfx::Unicode::strncpy(textArea1Buffer, name, TEXTAREA1_SIZE);
	textArea1.invalidate();
}
