#ifndef AUSCHOOSEDOCSCREENVIEW_HPP
#define AUSCHOOSEDOCSCREENVIEW_HPP

#include <gui_generated/auschoosedocscreen_screen/ausChooseDocScreenViewBase.hpp>
#include <gui/auschoosedocscreen_screen/ausChooseDocScreenPresenter.hpp>

class ausChooseDocScreenView : public ausChooseDocScreenViewBase
{
public:
    ausChooseDocScreenView();
    virtual ~ausChooseDocScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void selectTrigger();
    void upTrigger();
    void rightTrigger();
	void downTrigger();
	void leftTrigger();
	void backTrigger();
	void homeTrigger();
	void gotoNextScreen();
	void unFocusAll();
	void updateFocus();

	uint8_t y_cur,y_max;
	uint8_t markDone[3]={0,0,0};
protected:
};

#endif // AUSCHOOSEDOCSCREENVIEW_HPP
