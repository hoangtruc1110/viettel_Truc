#ifndef AUSCHOOSENIPLESCREENVIEW_HPP
#define AUSCHOOSENIPLESCREENVIEW_HPP

#include <gui_generated/auschooseniplescreen_screen/ausChooseNipleScreenViewBase.hpp>
#include <gui/auschooseniplescreen_screen/ausChooseNipleScreenPresenter.hpp>

class ausChooseNipleScreenView : public ausChooseNipleScreenViewBase
{
public:
    ausChooseNipleScreenView();
    virtual ~ausChooseNipleScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void rightTrigger();
	void leftTrigger();
	void upTrigger();
	void downTrigger();
	void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void gotoNextScreen();
	void updateFocus();
	void unfocusAll();

	int y_cur, y_max;
	int mark[2]={0,0};
protected:
};

#endif // AUSCHOOSENIPLESCREENVIEW_HPP
