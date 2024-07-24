#ifndef CHOOSEROLESCREENPRESENTER_HPP
#define CHOOSEROLESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class chooseRoleScreenView;

class chooseRoleScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    chooseRoleScreenPresenter(chooseRoleScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~chooseRoleScreenPresenter() {}
    void selectTrigger();
	void leftTrigger();
	void rightTrigger();

private:
    chooseRoleScreenPresenter();

    chooseRoleScreenView& view;
};

#endif // CHOOSEROLESCREENPRESENTER_HPP
