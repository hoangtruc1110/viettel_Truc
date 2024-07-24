#ifndef AUSPROCESSSCREENVIEW_HPP
#define AUSPROCESSSCREENVIEW_HPP

#include <gui_generated/ausprocessscreen_screen/ausProcessScreenViewBase.hpp>
#include <gui/ausprocessscreen_screen/ausProcessScreenPresenter.hpp>

class ausProcessScreenView : public ausProcessScreenViewBase
{
public:
    ausProcessScreenView();
    virtual ~ausProcessScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void handleTickEvent();
    void selectTrigger();
    void setState(uint8_t state);
protected:
    uint16_t tick;
    int8_t second;
    bool isStart;
};

#endif // AUSPROCESSSCREENVIEW_HPP
