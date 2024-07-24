#ifndef REALTIMEECGSCREENVIEW_HPP
#define REALTIMEECGSCREENVIEW_HPP

#include <gui_generated/realtimeecgscreen_screen/realTimeEcgScreenViewBase.hpp>
#include <gui/realtimeecgscreen_screen/realTimeEcgScreenPresenter.hpp>

class realTimeEcgScreenView : public realTimeEcgScreenViewBase
{
public:
    realTimeEcgScreenView();
    virtual ~realTimeEcgScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // REALTIMEECGSCREENVIEW_HPP
