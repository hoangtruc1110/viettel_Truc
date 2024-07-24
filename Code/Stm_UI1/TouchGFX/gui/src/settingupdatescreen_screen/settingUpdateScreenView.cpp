#include <gui/settingupdatescreen_screen/settingUpdateScreenView.hpp>

settingUpdateScreenView::settingUpdateScreenView()
{

}

void settingUpdateScreenView::setupScreen()
{
    settingUpdateScreenViewBase::setupScreen();
}

void settingUpdateScreenView::tearDownScreen()
{
    settingUpdateScreenViewBase::tearDownScreen();
}
void settingUpdateScreenView::selectTrigger(){

}
void settingUpdateScreenView::homeTrigger(){}
void settingUpdateScreenView::backTrigger(){
	application().gotosettingScreenScreenNoTransition();
}
