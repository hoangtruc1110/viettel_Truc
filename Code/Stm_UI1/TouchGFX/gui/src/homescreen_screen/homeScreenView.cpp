#include <gui/homescreen_screen/homeScreenView.hpp>

homeScreenView::homeScreenView(): y_cur(1), y_max(3), x_cur(0), x_max(1)
{

}

void homeScreenView::setupScreen()
{
    homeScreenViewBase::setupScreen();
    updateFocus();
}

void homeScreenView::tearDownScreen()
{
    homeScreenViewBase::tearDownScreen();
}
void homeScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void homeScreenView::upTrigger(){
	presenter->upTrigger();
}
void homeScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void homeScreenView::downTrigger(){
	presenter->downTrigger();
}
void homeScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void homeScreenView::backTrigger(){
	presenter->backTrigger();
}
void homeScreenView::homeTrigger(){
	presenter->homeTrigger();
}

void homeScreenView::updateFocus(){
	unFocusAll();
	switch(y_cur){
	case 0:
		settingFocus.setVisible(true);
		settingFocus.invalidate();
		break;
	case 1:
		if(x_cur == 0)
			profileItemContainer1.focus(true);
		else
			profileItemContainer2.focus(true);
		break;
	case 2:
		profileOtherContainer1.focus(true);
		break;
	case 3:
		profileOtherContainer2.focus(true);
		break;
	default:
		break;
	}
}
void homeScreenView::unFocusAll(){
	settingFocus.setVisible(false);
	settingFocus.invalidate();
	profileItemContainer1.focus(false);
	profileItemContainer2.focus(false);
	profileOtherContainer1.focus(false);
	profileOtherContainer2.focus(false);
}

void homeScreenView::gotoNextScreen(){
	switch(y_cur){
	case 0:
		application().gotosettingScreenScreenNoTransition();
		break;
	case 1:
		application().gotoexaminationScreenScreenNoTransition();
		break;
	case 2:
		application().gotorfidScanScreenScreenNoTransition();
		break;
	case 3:
		application().gotosettingScreenScreenNoTransition();
		break;
	default:
		break;
	}
}
