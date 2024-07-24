#include <gui/settingwifiscreen_screen/settingWifiScreenView.hpp>
#include <touchgfx/Color.hpp>
settingWifiScreenView::settingWifiScreenView(): y_cur(0), y_max(3)
{

}

void settingWifiScreenView::setupScreen()
{
    settingWifiScreenViewBase::setupScreen();
    char* testName[] = {"Wifi 1", "Wifi 2", "Wifi 3", "Wifi 4", "Wifi 5"};
    presenter->setWifiNames(testName, 5);
    updateItem();
}

void settingWifiScreenView::tearDownScreen()
{
    settingWifiScreenViewBase::tearDownScreen();
}

void settingWifiScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void settingWifiScreenView::upTrigger(){
	presenter->upTrigger();
}
void settingWifiScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void settingWifiScreenView::downTrigger(){
	presenter->downTrigger();
}
void settingWifiScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void settingWifiScreenView::backTrigger(){
	application().gotosettingScreenScreenNoTransition();
	presenter->backTrigger();
}
void settingWifiScreenView::homeTrigger(){
	presenter->homeTrigger();
}

void settingWifiScreenView::gotoNextScreen(){

}

void settingWifiScreenView::updateFocus(){
	unFocusAll();
	switch(y_cur){
	case 0:
		focusImg.setVisible(true);
		focusImg.invalidate();
		box2.setColor(touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43));
		box2.invalidate();
		break;
	case 1:
		settingWifiContainer1.focus(true);
		break;
	case 2:
		settingWifiContainer1_1.focus(true);
		break;
	case 3:
		settingWifiContainer1_2.focus(true);
		break;
	default:
		break;
	}
}
void settingWifiScreenView::unFocusAll(){
	focusImg.setVisible(false);
	focusImg.invalidate();
	box2.setColor(touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24));
	box2.invalidate();
	settingWifiContainer1.focus(false);
	settingWifiContainer1_1.focus(false);
	settingWifiContainer1_2.focus(false);
}

void settingWifiScreenView::setCurrentWifi(const char* text){
	touchgfx::Unicode::strncpy(textArea3Buffer, text, TEXTAREA3_SIZE);
//	tagName.resizeToCurrentText();
	textArea3.invalidate();
}

void settingWifiScreenView::setPreviousWifi(){
	settingWifiContainer1.setText(wifiNames[lastItemId-2]);
	settingWifiContainer1_1.setText(wifiNames[lastItemId-1]);
	settingWifiContainer1_2.setText(wifiNames[lastItemId-0]);
}

void settingWifiScreenView::updateItem(){
	setPreviousWifi();
}


