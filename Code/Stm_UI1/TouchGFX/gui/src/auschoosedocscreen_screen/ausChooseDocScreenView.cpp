#include <gui/auschoosedocscreen_screen/ausChooseDocScreenView.hpp>

ausChooseDocScreenView::ausChooseDocScreenView():y_cur(0), y_max(2)
{

}

void ausChooseDocScreenView::setupScreen()
{
    ausChooseDocScreenViewBase::setupScreen();
    ausChooseDocContainer1.setText("Heart");
    ausChooseDocContainer1_1.setText("Lung");
    ausChooseDocContainer1_2.setText("Others");
	updateFocus();
}

void ausChooseDocScreenView::tearDownScreen()
{
    ausChooseDocScreenViewBase::tearDownScreen();
}

void ausChooseDocScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void ausChooseDocScreenView::upTrigger(){
	presenter->upTrigger();
}
void ausChooseDocScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void ausChooseDocScreenView::downTrigger(){
	presenter->downTrigger();
}
void ausChooseDocScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void ausChooseDocScreenView::backTrigger(){

}
void ausChooseDocScreenView::homeTrigger(){

}

void ausChooseDocScreenView::unFocusAll(){
	ausChooseDocContainer1.focus(false);
	ausChooseDocContainer1_1.focus(false);
	ausChooseDocContainer1_2.focus(false);
}
void ausChooseDocScreenView::updateFocus(){
	unFocusAll();
	if(y_cur == 0){
		ausChooseDocContainer1.focus(true);
	}else if(y_cur == 1){
		ausChooseDocContainer1_1.focus(true);
	}else if(y_cur == 2){
		ausChooseDocContainer1_2.focus(true);
	}
}
void ausChooseDocScreenView::gotoNextScreen(){

	if(y_cur == 0){
		application().gotoverifyScreenScreenNoTransition();
	}else if(y_cur == 1){
		application().gotoverifyScreenScreenNoTransition();
	}else if(y_cur == 2){
		application().gotoausProcessScreenScreenNoTransition();
	}
}
