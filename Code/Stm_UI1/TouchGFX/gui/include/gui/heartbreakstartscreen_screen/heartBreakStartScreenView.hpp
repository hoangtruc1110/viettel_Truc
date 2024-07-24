#ifndef HEARTBREAKSTARTSCREENVIEW_HPP
#define HEARTBREAKSTARTSCREENVIEW_HPP

#include <gui_generated/heartbreakstartscreen_screen/heartBreakStartScreenViewBase.hpp>
#include <gui/heartbreakstartscreen_screen/heartBreakStartScreenPresenter.hpp>

class heartBreakStartScreenView : public heartBreakStartScreenViewBase
{
public:
    heartBreakStartScreenView();
    virtual ~heartBreakStartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    void selectTrigger();
    void changeState(uint8_t);
    void setBPM(uint8_t value);
    void setSPO2(uint8_t value);
    void setPI(const char* text);
    void blinkSignal();
    void gotoNextScreen();
    bool isStart;
    bool isDone;
    uint16_t tick;
    uint8_t runTimeSeconds;

    virtual void uart_Data(char *data);

protected:
};

#endif // HEARTBREAKSTARTSCREENVIEW_HPP
