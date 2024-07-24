#ifndef TEMPRESULTSCREENVIEW_HPP
#define TEMPRESULTSCREENVIEW_HPP

#include <gui_generated/tempresultscreen_screen/tempResultScreenViewBase.hpp>
#include <gui/tempresultscreen_screen/tempResultScreenPresenter.hpp>

class tempResultScreenView : public tempResultScreenViewBase
{
public:
    tempResultScreenView();
    virtual ~tempResultScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void selectTrigger();
    void gotoNextScreen();
    void updateResult(float valueF);
    virtual void uart_Data(char *data);
protected:
};

#endif // TEMPRESULTSCREENVIEW_HPP
