#include <gui/accountscreen_screen/accountScreenView.hpp>

accountScreenView::accountScreenView()
{

}

void accountScreenView::setupScreen()
{
    accountScreenViewBase::setupScreen();
}

void accountScreenView::tearDownScreen()
{
    accountScreenViewBase::tearDownScreen();
}

void accountScreenView::selectTrigger(){}
void accountScreenView::homeTrigger(){}
void accountScreenView::backTrigger(){
	application().gotosettingScreenScreenNoTransition();
}
