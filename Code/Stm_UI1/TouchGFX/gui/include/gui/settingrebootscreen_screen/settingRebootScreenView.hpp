#ifndef SETTINGREBOOTSCREENVIEW_HPP
#define SETTINGREBOOTSCREENVIEW_HPP

#include <gui_generated/settingrebootscreen_screen/settingRebootScreenViewBase.hpp>
#include <gui/settingrebootscreen_screen/settingRebootScreenPresenter.hpp>

class settingRebootScreenView : public settingRebootScreenViewBase
{
public:
    settingRebootScreenView();
    virtual ~settingRebootScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void selectTrigger();
protected:
};

#endif // SETTINGREBOOTSCREENVIEW_HPP
