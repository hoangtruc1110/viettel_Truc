#ifndef SENSORINTERACTVIEW_HPP
#define SENSORINTERACTVIEW_HPP

#include <gui_generated/sensorinteract_screen/sensorInteractViewBase.hpp>
#include <gui/sensorinteract_screen/sensorInteractPresenter.hpp>

class sensorInteractView : public sensorInteractViewBase
{
public:
    sensorInteractView();
    virtual ~sensorInteractView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SENSORINTERACTVIEW_HPP
