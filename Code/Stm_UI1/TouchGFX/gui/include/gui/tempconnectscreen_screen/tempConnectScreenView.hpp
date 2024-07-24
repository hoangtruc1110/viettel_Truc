#ifndef TEMPCONNECTSCREENVIEW_HPP
#define TEMPCONNECTSCREENVIEW_HPP

#include <gui_generated/tempconnectscreen_screen/tempConnectScreenViewBase.hpp>
#include <gui/tempconnectscreen_screen/tempConnectScreenPresenter.hpp>

class tempConnectScreenView : public tempConnectScreenViewBase
{
public:
    tempConnectScreenView();
    virtual ~tempConnectScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

//    void selectTrigger();
//	void homeTrigger();
//	void backTrigger();
protected:
};

#endif // TEMPCONNECTSCREENVIEW_HPP
