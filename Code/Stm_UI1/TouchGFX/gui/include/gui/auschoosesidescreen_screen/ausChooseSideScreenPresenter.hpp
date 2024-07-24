#ifndef AUSCHOOSESIDESCREENPRESENTER_HPP
#define AUSCHOOSESIDESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ausChooseSideScreenView;

class ausChooseSideScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ausChooseSideScreenPresenter(ausChooseSideScreenView& v);

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

    virtual ~ausChooseSideScreenPresenter() {}
    void rightTrigger();
	void leftTrigger();
	void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void updateChooseView();
	void unchooseAll();
	void setExamFlow(uint8_t flowType, uint8_t value);
private:
    ausChooseSideScreenPresenter();

    ausChooseSideScreenView& view;
};

#endif // AUSCHOOSESIDESCREENPRESENTER_HPP
