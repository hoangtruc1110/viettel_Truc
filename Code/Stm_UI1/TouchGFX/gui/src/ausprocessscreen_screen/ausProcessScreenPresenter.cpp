#include <gui/ausprocessscreen_screen/ausProcessScreenView.hpp>
#include <gui/ausprocessscreen_screen/ausProcessScreenPresenter.hpp>

ausProcessScreenPresenter::ausProcessScreenPresenter(ausProcessScreenView& v)
    : view(v)
{

}

void ausProcessScreenPresenter::activate()
{

}

void ausProcessScreenPresenter::deactivate()
{

}

void ausProcessScreenPresenter::selectTrigger(){
	view.setState(1);
}
