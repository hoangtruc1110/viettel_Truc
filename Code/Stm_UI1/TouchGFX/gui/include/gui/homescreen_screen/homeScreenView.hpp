#ifndef HOMESCREENVIEW_HPP
#define HOMESCREENVIEW_HPP

#include <gui_generated/homescreen_screen/homeScreenViewBase.hpp>
#include <gui/homescreen_screen/homeScreenPresenter.hpp>

class homeScreenView : public homeScreenViewBase
{
public:
    homeScreenView();
    virtual ~homeScreenView() {}
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
	void gotoNextScreen();

	uint8_t y_cur, y_max;
	uint8_t x_cur, x_max;
protected:
};

#endif // HOMESCREENVIEW_HPP
