#ifndef SETTINGTEMPSCREENVIEW_HPP
#define SETTINGTEMPSCREENVIEW_HPP

#include <gui_generated/settingtempscreen_screen/settingTempScreenViewBase.hpp>
#include <gui/settingtempscreen_screen/settingTempScreenPresenter.hpp>

class settingTempScreenView : public settingTempScreenViewBase
{
public:
    settingTempScreenView();
    virtual ~settingTempScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void selectTrigger();
    void homeTrigger();
    void backTrigger();
    void upTrigger();
    void downTrigger();
    void updateFocus();
    void unFocusAll();

    uint8_t y_cur;
    const uint8_t y_max=1;
};

#endif // SETTINGTEMPSCREENVIEW_HPP
