#ifndef TEMPPROCESSSCREENVIEW_HPP
#define TEMPPROCESSSCREENVIEW_HPP

#include <gui_generated/tempprocessscreen_screen/tempProcessScreenViewBase.hpp>
#include <gui/tempprocessscreen_screen/tempProcessScreenPresenter.hpp>

class tempProcessScreenView : public tempProcessScreenViewBase
{
public:
    tempProcessScreenView();
    virtual ~tempProcessScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void setState();
protected:
};

#endif // TEMPPROCESSSCREENVIEW_HPP
