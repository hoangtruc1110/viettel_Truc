#ifndef AUSPROCESSDOCSCREENPRESENTER_HPP
#define AUSPROCESSDOCSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ausProcessDocScreenView;

class ausProcessDocScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ausProcessDocScreenPresenter(ausProcessDocScreenView& v);

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

    virtual ~ausProcessDocScreenPresenter() {}
    void selectTrigger();
	void upTrigger();
	void rightTrigger();
	void downTrigger();
	void leftTrigger();
	void backTrigger();
	void homeTrigger();
private:
    ausProcessDocScreenPresenter();

    ausProcessDocScreenView& view;
};

#endif // AUSPROCESSDOCSCREENPRESENTER_HPP
