#include <gui/settingtempscreen_screen/settingTempScreenView.hpp>

settingTempScreenView::settingTempScreenView()
{

}

void settingTempScreenView::setupScreen()
{
    settingTempScreenViewBase::setupScreen();
    y_cur = 0;
    settingTempContainer1.setTagName("C");
    settingTempContainer2.setTagName("F");
    updateFocus();
}

void settingTempScreenView::tearDownScreen()
{
    settingTempScreenViewBase::tearDownScreen();
}

void settingTempScreenView::selectTrigger(){}
void settingTempScreenView::homeTrigger(){}
void settingTempScreenView::backTrigger(){
	application().gotosettingScreenScreenNoTransition();
}
void settingTempScreenView::upTrigger(){
	presenter->upTrigger();
}
void settingTempScreenView::downTrigger(){
	presenter->downTrigger();
}
void settingTempScreenView::updateFocus(){
	unFocusAll();
	if(y_cur == 0){
		settingTempContainer1.focus(true);
	}else{
		settingTempContainer2.focus(true);
	}
}
void settingTempScreenView::unFocusAll(){
	settingTempContainer1.focus(false);
	settingTempContainer2.focus(false);
}
