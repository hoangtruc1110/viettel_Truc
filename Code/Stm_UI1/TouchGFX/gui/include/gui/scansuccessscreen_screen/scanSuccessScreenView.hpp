#ifndef SCANSUCCESSSCREENVIEW_HPP
#define SCANSUCCESSSCREENVIEW_HPP

#include <gui_generated/scansuccessscreen_screen/scanSuccessScreenViewBase.hpp>
#include <gui/scansuccessscreen_screen/scanSuccessScreenPresenter.hpp>

class scanSuccessScreenView : public scanSuccessScreenViewBase
{
public:
    scanSuccessScreenView();
    virtual ~scanSuccessScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCANSUCCESSSCREENVIEW_HPP
