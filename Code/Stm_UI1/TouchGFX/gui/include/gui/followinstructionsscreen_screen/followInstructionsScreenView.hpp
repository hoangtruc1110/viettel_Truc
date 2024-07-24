#ifndef FOLLOWINSTRUCTIONSSCREENVIEW_HPP
#define FOLLOWINSTRUCTIONSSCREENVIEW_HPP

#include <gui_generated/followinstructionsscreen_screen/followInstructionsScreenViewBase.hpp>
#include <gui/followinstructionsscreen_screen/followInstructionsScreenPresenter.hpp>

class followInstructionsScreenView : public followInstructionsScreenViewBase
{
public:
    followInstructionsScreenView();
    virtual ~followInstructionsScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FOLLOWINSTRUCTIONSSCREENVIEW_HPP
