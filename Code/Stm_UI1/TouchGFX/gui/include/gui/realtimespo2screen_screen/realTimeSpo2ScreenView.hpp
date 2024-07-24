#ifndef REALTIMESPO2SCREENVIEW_HPP
#define REALTIMESPO2SCREENVIEW_HPP

#include <gui_generated/realtimespo2screen_screen/realTimeSpo2ScreenViewBase.hpp>
#include <gui/realtimespo2screen_screen/realTimeSpo2ScreenPresenter.hpp>

class realTimeSpo2ScreenView : public realTimeSpo2ScreenViewBase
{
public:
    realTimeSpo2ScreenView();
    virtual ~realTimeSpo2ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // REALTIMESPO2SCREENVIEW_HPP
