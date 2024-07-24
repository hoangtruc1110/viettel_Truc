#include <gui/chooserolescreen_screen/chooseRoleScreenView.hpp>

chooseRoleScreenView::chooseRoleScreenView()
{

}

void chooseRoleScreenView::setupScreen()
{
    chooseRoleScreenViewBase::setupScreen();
    updateFocus();
}

void chooseRoleScreenView::tearDownScreen()
{
    chooseRoleScreenViewBase::tearDownScreen();
}

void chooseRoleScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void chooseRoleScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void chooseRoleScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void chooseRoleScreenView::updateFocus(){
	unFocusAll();
	if(x_cur == 0){
		roleContainer1.focus(true);
	}else{
		roleContainer2.focus(true);
	}
}
void chooseRoleScreenView::unFocusAll(){
	roleContainer1.focus(false);
	roleContainer2.focus(false);
}
void chooseRoleScreenView::gotoNextScreen(){
	application().gotohomeScreenScreenNoTransition();
}
