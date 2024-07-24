#ifndef SCANERRORSCREENVIEW_HPP
#define SCANERRORSCREENVIEW_HPP

#include <gui_generated/scanerrorscreen_screen/scanErrorScreenViewBase.hpp>
#include <gui/scanerrorscreen_screen/scanErrorScreenPresenter.hpp>

class scanErrorScreenView : public scanErrorScreenViewBase
{
public:
    scanErrorScreenView();
    virtual ~scanErrorScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCANERRORSCREENVIEW_HPP
