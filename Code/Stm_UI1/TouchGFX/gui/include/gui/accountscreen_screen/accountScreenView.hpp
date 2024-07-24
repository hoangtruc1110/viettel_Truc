#ifndef ACCOUNTSCREENVIEW_HPP
#define ACCOUNTSCREENVIEW_HPP

#include <gui_generated/accountscreen_screen/accountScreenViewBase.hpp>
#include <gui/accountscreen_screen/accountScreenPresenter.hpp>

class accountScreenView : public accountScreenViewBase
{
public:
    accountScreenView();
    virtual ~accountScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
	void homeTrigger();
	void backTrigger();
protected:
};

#endif // ACCOUNTSCREENVIEW_HPP
