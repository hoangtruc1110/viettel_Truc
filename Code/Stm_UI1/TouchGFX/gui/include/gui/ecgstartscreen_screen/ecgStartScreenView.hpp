#ifndef ECGSTARTSCREENVIEW_HPP
#define ECGSTARTSCREENVIEW_HPP

#include <gui_generated/ecgstartscreen_screen/ecgStartScreenViewBase.hpp>
#include <gui/ecgstartscreen_screen/ecgStartScreenPresenter.hpp>

class ecgStartScreenView : public ecgStartScreenViewBase
{
public:
    ecgStartScreenView();
    virtual ~ecgStartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void handleTickEvent();
    void selectTrigger();
    void backTrigger();
    void homeTrigger();
    void setState(uint8_t state);
    void addGraphPoint(uint8_t value);
    void setBPM(uint8_t value);
    void blinkSignal();
    void updateSecondCount();
    void gotoNextScreen();

    uint16_t tick;
    bool isStart;
    uint8_t runTimeSeconds;
    bool isDone;
protected:
};

#endif // ECGSTARTSCREENVIEW_HPP
