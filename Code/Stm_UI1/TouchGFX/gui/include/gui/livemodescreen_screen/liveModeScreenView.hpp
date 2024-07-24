#ifndef LIVEMODESCREENVIEW_HPP
#define LIVEMODESCREENVIEW_HPP

#include <gui_generated/livemodescreen_screen/liveModeScreenViewBase.hpp>
#include <gui/livemodescreen_screen/liveModeScreenPresenter.hpp>

class liveModeScreenView : public liveModeScreenViewBase
{
public:
    liveModeScreenView();
    virtual ~liveModeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LIVEMODESCREENVIEW_HPP
