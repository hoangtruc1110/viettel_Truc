#include <gui/settingrebootscreen_screen/settingRebootScreenView.hpp>

settingRebootScreenView::settingRebootScreenView()
{

}

void settingRebootScreenView::setupScreen()
{
    settingRebootScreenViewBase::setupScreen();
}

void settingRebootScreenView::tearDownScreen()
{
    settingRebootScreenViewBase::tearDownScreen();
}
void settingRebootScreenView::selectTrigger(){
	application().gotosettingScreenScreenNoTransition();
}
