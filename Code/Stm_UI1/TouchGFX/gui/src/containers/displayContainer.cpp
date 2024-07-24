#include <gui/containers/displayContainer.hpp>
#include <touchgfx/Color.hpp>
displayContainer::displayContainer()
{

}

void displayContainer::initialize()
{
    displayContainerBase::initialize();
}

void displayContainer::setValue(uint16_t value, bool isTime){
	touchgfx::Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE,isTime?"%ds":"%d", value);
	textArea3.invalidate();
}
void displayContainer::focus(bool isFocus){
	focusImg.setVisible(isFocus);
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2f, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1b, 0x24);
	box1.setColor(color);
	circle1Painter.setColor(color);
	circle1_2Painter.setColor(color);
	circle1_3Painter.setColor(color);
	circle1_4Painter.setColor(color);
	box2_1.setColor(color);
	box2_2.setColor(color);
	box2_3.setColor(color);
	box2_4.setColor(color);

	focusImg.invalidate();
	box1.invalidate();
	circle1.invalidate();
	circle1_2.invalidate();
	circle1_3.invalidate();
	circle1_4.invalidate();
	box2_1.invalidate();
	box2_2.invalidate();
	box2_3.invalidate();
	box2_4.invalidate();
}
