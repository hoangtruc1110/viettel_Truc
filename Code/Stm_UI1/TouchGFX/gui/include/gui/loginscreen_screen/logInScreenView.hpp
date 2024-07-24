#ifndef LOGINSCREENVIEW_HPP
#define LOGINSCREENVIEW_HPP

#include <gui_generated/loginscreen_screen/logInScreenViewBase.hpp>
#include <gui/loginscreen_screen/logInScreenPresenter.hpp>

class logInScreenView : public logInScreenViewBase
{
public:
    logInScreenView();
    virtual ~logInScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LOGINSCREENVIEW_HPP
