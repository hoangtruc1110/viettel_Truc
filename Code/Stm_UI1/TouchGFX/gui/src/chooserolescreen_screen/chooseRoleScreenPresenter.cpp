#include <gui/chooserolescreen_screen/chooseRoleScreenView.hpp>
#include <gui/chooserolescreen_screen/chooseRoleScreenPresenter.hpp>

chooseRoleScreenPresenter::chooseRoleScreenPresenter(chooseRoleScreenView& v)
    : view(v)
{

}

void chooseRoleScreenPresenter::activate()
{

}

void chooseRoleScreenPresenter::deactivate()
{

}

void chooseRoleScreenPresenter::selectTrigger(){
	model->isDoctor = view.x_cur==0?false:true;
	view.gotoNextScreen();
}
void chooseRoleScreenPresenter::leftTrigger(){
	if(view.x_cur > 0){
		view.x_cur--;
		view.updateFocus();
	}
}
void chooseRoleScreenPresenter::rightTrigger(){
	if(view.x_cur < view.x_max){
		view.x_cur++;
		view.updateFocus();
	}
}
