#ifndef AUSCHOOSESIDESCREENVIEW_HPP
#define AUSCHOOSESIDESCREENVIEW_HPP

#include <gui_generated/auschoosesidescreen_screen/ausChooseSideScreenViewBase.hpp>
#include <gui/auschoosesidescreen_screen/ausChooseSideScreenPresenter.hpp>

class ausChooseSideScreenView : public ausChooseSideScreenViewBase
{
public:
    ausChooseSideScreenView();
    virtual ~ausChooseSideScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void rightTrigger();
	void leftTrigger();
	void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void chooseLeftSide(bool isChoose);
	void chooseRightSide(bool isChoose);
	void gotoNextScreen();

	int8_t x_cur, x_max;
	int8_t mark_side[2]={0,0};
protected:
};

#endif // AUSCHOOSESIDESCREENVIEW_HPP
