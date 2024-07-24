#ifndef LOGOSCREENVIEW_HPP
#define LOGOSCREENVIEW_HPP

#include <gui_generated/logoscreen_screen/logoScreenViewBase.hpp>
#include <gui/logoscreen_screen/logoScreenPresenter.hpp>

class logoScreenView : public logoScreenViewBase
{
public:
    logoScreenView();
    virtual ~logoScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LOGOSCREENVIEW_HPP
