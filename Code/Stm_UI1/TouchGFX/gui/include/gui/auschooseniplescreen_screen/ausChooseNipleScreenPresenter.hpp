#ifndef AUSCHOOSENIPLESCREENPRESENTER_HPP
#define AUSCHOOSENIPLESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ausChooseNipleScreenView;

class ausChooseNipleScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ausChooseNipleScreenPresenter(ausChooseNipleScreenView& v);

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

    virtual ~ausChooseNipleScreenPresenter() {}
    void rightTrigger();
	void leftTrigger();
	void upTrigger();
	void downTrigger();
	void selectTrigger();
	void homeTrigger();
	void backTrigger();
private:
    ausChooseNipleScreenPresenter();

    ausChooseNipleScreenView& view;
};

#endif // AUSCHOOSENIPLESCREENPRESENTER_HPP
