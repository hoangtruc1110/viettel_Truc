#ifndef AUSPROCESSDOCSCREENVIEW_HPP
#define AUSPROCESSDOCSCREENVIEW_HPP

#include <gui_generated/ausprocessdocscreen_screen/ausProcessDocScreenViewBase.hpp>
#include <gui/ausprocessdocscreen_screen/ausProcessDocScreenPresenter.hpp>

class ausProcessDocScreenView : public ausProcessDocScreenViewBase
{
public:
    ausProcessDocScreenView();
    virtual ~ausProcessDocScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
	void upTrigger();
	void rightTrigger();
	void downTrigger();
	void leftTrigger();
	void backTrigger();
	void homeTrigger();
	void updateFocus();
	void unFocusAll();
	void updateMark();

	uint8_t x_cur, x_max, y_cur, y_max;
	uint8_t markDone[4]={0,0,0,0};
protected:
};

#endif // AUSPROCESSDOCSCREENVIEW_HPP
