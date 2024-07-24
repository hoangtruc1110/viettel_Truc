#ifndef CHOOSEROLESCREENVIEW_HPP
#define CHOOSEROLESCREENVIEW_HPP

#include <gui_generated/chooserolescreen_screen/chooseRoleScreenViewBase.hpp>
#include <gui/chooserolescreen_screen/chooseRoleScreenPresenter.hpp>

class chooseRoleScreenView : public chooseRoleScreenViewBase
{
public:
    chooseRoleScreenView();
    virtual ~chooseRoleScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
    void leftTrigger();
    void rightTrigger();
    void updateFocus();
    void unFocusAll();
    void gotoNextScreen();

    uint8_t x_cur = 0, x_max = 1;
protected:
};

#endif // CHOOSEROLESCREENVIEW_HPP
