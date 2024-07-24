#ifndef SETTINGACCOUNTSCREENVIEW_HPP
#define SETTINGACCOUNTSCREENVIEW_HPP

#include <gui_generated/settingaccountscreen_screen/settingAccountScreenViewBase.hpp>
#include <gui/settingaccountscreen_screen/settingAccountScreenPresenter.hpp>

class settingAccountScreenView : public settingAccountScreenViewBase
{
public:
    settingAccountScreenView();
    virtual ~settingAccountScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETTINGACCOUNTSCREENVIEW_HPP
