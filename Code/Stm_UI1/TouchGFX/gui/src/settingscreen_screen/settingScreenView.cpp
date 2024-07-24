#include <gui/settingscreen_screen/settingScreenView.hpp>

settingScreenView::settingScreenView():y_max(4){

}

void settingScreenView::setupScreen()
{
    settingScreenViewBase::setupScreen();
    updateItem();
    updatefocus();
}

void settingScreenView::tearDownScreen()
{
    settingScreenViewBase::tearDownScreen();
}

uint8_t settingScreenView::y_cur = 0;
uint8_t settingScreenView::lastItemId = 4;

void settingScreenView::updateItem(){
	settingItemContainer1.setText(settingText[lastItemId-4]);
	settingItemContainer1.setIcon(settingIcon[lastItemId-4]);
	settingItemContainer1_1.setText(settingText[lastItemId-3]);
	settingItemContainer1_1.setIcon(settingIcon[lastItemId-3]);
	settingItemContainer1_2.setText(settingText[lastItemId-2]);
	settingItemContainer1_2.setIcon(settingIcon[lastItemId-2]);
	settingItemContainer1_3.setText(settingText[lastItemId-1]);
	settingItemContainer1_3.setIcon(settingIcon[lastItemId-1]);
	settingItemContainer1_4.setText(settingText[lastItemId-0]);
	settingItemContainer1_4.setIcon(settingIcon[lastItemId-0]);
}

void settingScreenView::unFocusAll(){
	settingItemContainer1.focus(false);
	settingItemContainer1_1.focus(false);
	settingItemContainer1_2.focus(false);
	settingItemContainer1_3.focus(false);
	settingItemContainer1_4.focus(false);
}
void settingScreenView::updatefocus(){
	unFocusAll();
	switch(y_cur){
	case 0:
		settingItemContainer1.focus(true);
		break;
	case 1:
		settingItemContainer1_1.focus(true);
		break;
	case 2:
		settingItemContainer1_2.focus(true);
		break;
	case 3:
		settingItemContainer1_3.focus(true);
		break;
	case 4:
		settingItemContainer1_4.focus(true);
		break;
	default:
		break;
	}
}

void settingScreenView::gotoNextScreen(){
	switch(lastItemId- 4 + y_cur){
	case 0:
		application().gotoaccountScreenScreenNoTransition();
		break;
	case 1:
		application().gotosettingWifiScreenScreenNoTransition();
		break;
	case 2:
		application().gotosettingDisplayScreenScreenNoTransition();
		break;
	case 3:
		application().gotosettingVolumeScreenScreenNoTransition();
		break;
	case 4:
		application().gotosettingTempScreenScreenNoTransition();
		break;
	case 5:

		break;
	case 6:
		application().gotosettingUpdateScreenScreenNoTransition();
		break;
	case 7:
		application().gotosettingRebootScreenScreenNoTransition();
		break;
	}
}

void settingScreenView::gotoPreviousScreen(){
	application().gotohomeScreenScreenNoTransition();

}

void settingScreenView::upTrigger(){
	presenter->upTrigger();
}
void settingScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void settingScreenView::downTrigger(){
	presenter->downTrigger();
}
void settingScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void settingScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void settingScreenView::backTrigger(){
	presenter->backTrigger();
}
void settingScreenView::homeTrigger(){
	presenter->homeTrigger();
}

