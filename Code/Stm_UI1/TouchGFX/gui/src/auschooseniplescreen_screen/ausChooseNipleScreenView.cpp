#include <gui/auschooseniplescreen_screen/ausChooseNipleScreenView.hpp>

ausChooseNipleScreenView::ausChooseNipleScreenView(): y_cur(0), y_max(1)
{

}

void ausChooseNipleScreenView::setupScreen()
{
    ausChooseNipleScreenViewBase::setupScreen();
    ausChooseNipleContainer1.setText("M");
    ausChooseNipleContainer2.setText("L1");
    updateFocus();
}

void ausChooseNipleScreenView::tearDownScreen()
{
    ausChooseNipleScreenViewBase::tearDownScreen();
}

void ausChooseNipleScreenView::upTrigger(){
	presenter->upTrigger();
}
void ausChooseNipleScreenView::downTrigger(){
	presenter->downTrigger();
}
void ausChooseNipleScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void ausChooseNipleScreenView::homeTrigger(){
	presenter->homeTrigger();
}
void ausChooseNipleScreenView::backTrigger(){
	presenter->backTrigger();
}

void ausChooseNipleScreenView::gotoNextScreen(){
	application().gotoausProcessScreenScreenNoTransition();
}

void ausChooseNipleScreenView::updateFocus(){
	unfocusAll();
	switch(y_cur){
		case 0:
			ausChooseNipleContainer1.focus(true);
			break;
		case 1:
			ausChooseNipleContainer2.focus(true);
			break;
		default:
			break;
	}

}
void ausChooseNipleScreenView::unfocusAll(){
	ausChooseNipleContainer1.focus(false);
	ausChooseNipleContainer2.focus(false);
}
