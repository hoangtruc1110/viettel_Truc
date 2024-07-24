#ifndef VERIFYSCREENVIEW_HPP
#define VERIFYSCREENVIEW_HPP

#include <gui_generated/verifyscreen_screen/verifyScreenViewBase.hpp>
#include <gui/verifyscreen_screen/verifyScreenPresenter.hpp>

class verifyScreenView : public verifyScreenViewBase
{
public:
    verifyScreenView();
    virtual ~verifyScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
    void gotoNextScreen(uint8_t i);
    void setText(const char* text);
private:
    void getTextFromModel();
protected:
};

#endif // VERIFYSCREENVIEW_HPP
