#ifndef AUSCHOOSEDOCSCREENPRESENTER_HPP
#define AUSCHOOSEDOCSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ausChooseDocScreenView;

class ausChooseDocScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ausChooseDocScreenPresenter(ausChooseDocScreenView& v);

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

    virtual ~ausChooseDocScreenPresenter() {}
    void selectTrigger();
    void upTrigger();
    void rightTrigger();
	void downTrigger();
	void leftTrigger();
	void backTrigger();
	void homeTrigger();
	void setExamFlow(uint8_t flowType, uint8_t value);
private:
    ausChooseDocScreenPresenter();

    ausChooseDocScreenView& view;
};

#endif // AUSCHOOSEDOCSCREENPRESENTER_HPP
