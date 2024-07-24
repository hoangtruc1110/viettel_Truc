#ifndef LOGOUTSCREENVIEW_HPP
#define LOGOUTSCREENVIEW_HPP

#include <gui_generated/logoutscreen_screen/logOutScreenViewBase.hpp>
#include <gui/logoutscreen_screen/logOutScreenPresenter.hpp>

class logOutScreenView : public logOutScreenViewBase
{
public:
    logOutScreenView();
    virtual ~logOutScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LOGOUTSCREENVIEW_HPP
