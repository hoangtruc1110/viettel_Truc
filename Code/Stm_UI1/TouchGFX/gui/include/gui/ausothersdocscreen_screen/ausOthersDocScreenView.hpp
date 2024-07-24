#ifndef AUSOTHERSDOCSCREENVIEW_HPP
#define AUSOTHERSDOCSCREENVIEW_HPP

#include <gui_generated/ausothersdocscreen_screen/ausOthersDocScreenViewBase.hpp>
#include <gui/ausothersdocscreen_screen/ausOthersDocScreenPresenter.hpp>

class ausOthersDocScreenView : public ausOthersDocScreenViewBase
{
public:
    ausOthersDocScreenView();
    virtual ~ausOthersDocScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // AUSOTHERSDOCSCREENVIEW_HPP
