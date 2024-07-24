#ifndef RFIDUNLINKEDSCREENVIEW_HPP
#define RFIDUNLINKEDSCREENVIEW_HPP

#include <gui_generated/rfidunlinkedscreen_screen/rfidUnlinkedScreenViewBase.hpp>
#include <gui/rfidunlinkedscreen_screen/rfidUnlinkedScreenPresenter.hpp>

class rfidUnlinkedScreenView : public rfidUnlinkedScreenViewBase
{
public:
    rfidUnlinkedScreenView();
    virtual ~rfidUnlinkedScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RFIDUNLINKEDSCREENVIEW_HPP
