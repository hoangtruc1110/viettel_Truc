#ifndef MONITORSCREENVIEW_HPP
#define MONITORSCREENVIEW_HPP

#include <gui_generated/monitorscreen_screen/monitorScreenViewBase.hpp>
#include <gui/monitorscreen_screen/monitorScreenPresenter.hpp>

class monitorScreenView : public monitorScreenViewBase
{
public:
    monitorScreenView();
    virtual ~monitorScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void upTrigger();
    void rightTrigger();
    void downTrigger();
    void leftTrigger();
    void selectTrigger();
    void updateView();
    void disableAll();
    void updateMarkExam();
    void updateWiFiIcon(uint8_t value);
    void updateBatIcon(uint8_t value);
protected:
    uint8_t x_max = 1, y_max = 2;
    uint8_t x_cur = 0, y_cur = 1;
    uint8_t markExam[4]={0,0,0,0};
};

#endif // MONITORSCREENVIEW_HPP
