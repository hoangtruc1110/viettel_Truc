#include <gui/containers/settingWifiContainer.hpp>
#include <touchgfx/Color.hpp>
settingWifiContainer::settingWifiContainer()
{

}

void settingWifiContainer::initialize()
{
    settingWifiContainerBase::initialize();
}

void settingWifiContainer::focus(bool isFocus){
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24);
	changeCurveBoxColor(color);
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
}
void settingWifiContainer::setText(const char* text){
	touchgfx::Unicode::strncpy(wifiNameBuffer, text, WIFINAME_SIZE);
//	tagName.resizeToCurrentText();
	wifiName.invalidate();
}

void settingWifiContainer::changeCurveBoxColor(colortype color){
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
