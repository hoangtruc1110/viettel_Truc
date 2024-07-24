#ifndef EXAMINATIONSCREENVIEW_HPP
#define EXAMINATIONSCREENVIEW_HPP

#include <gui_generated/examinationscreen_screen/examinationScreenViewBase.hpp>
#include <gui/examinationscreen_screen/examinationScreenPresenter.hpp>

class examinationScreenView : public examinationScreenViewBase
{
public:
    examinationScreenView();
    virtual ~examinationScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void upTrigger();
    void rightTrigger();
    void downTrigger();
    void leftTrigger();
    void selectTrigger();
    void updateFocus();
    void unFocusAll();
    void updateMarkExam();
    void gotoNextScreen(uint8_t id);
    void updateWiFiIcon(uint8_t value);
    void updateBatIcon(uint8_t value);

    int8_t x_max = 1, y_max = 2;
	int8_t x_cur = 0, y_cur = 1;
	uint8_t markExam[4]={0,0,0,0};
protected:

};

#endif // EXAMINATIONSCREENVIEW_HPP
