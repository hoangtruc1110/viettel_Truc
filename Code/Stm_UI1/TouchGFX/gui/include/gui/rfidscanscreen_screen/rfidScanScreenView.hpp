#ifndef RFIDSCANSCREENVIEW_HPP
#define RFIDSCANSCREENVIEW_HPP

#include <gui_generated/rfidscanscreen_screen/rfidScanScreenViewBase.hpp>
#include <gui/rfidscanscreen_screen/rfidScanScreenPresenter.hpp>

class rfidScanScreenView : public rfidScanScreenViewBase
{
public:
    rfidScanScreenView();
    virtual ~rfidScanScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RFIDSCANSCREENVIEW_HPP
