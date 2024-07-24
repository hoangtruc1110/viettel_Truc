#include <gui/containers/settingItemContainer.hpp>
#include <touchgfx/Color.hpp>

settingItemContainer::settingItemContainer()
{

}

void settingItemContainer::initialize()
{
    settingItemContainerBase::initialize();
}

void settingItemContainer::focus(bool isFocus){
	colortype color = isFocus?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24);
	changeCurveBoxColor(color);
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
}

void settingItemContainer::setText(const char* text){
	touchgfx::Unicode::strncpy(settingNameBuffer, text, SETTINGNAME_SIZE);
//	tagName.resizeToCurrentText();
	settingName.invalidate();
}

void settingItemContainer::setIcon(BitmapId imgID){
	settingIcon.setBitmap(Bitmap(imgID));  // ID of the image you want to show, go to BitmapDatabase.hpp to see the ID of your images
	settingIcon.invalidate();
}

void settingItemContainer::changeCurveBoxColor(colortype color){
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
