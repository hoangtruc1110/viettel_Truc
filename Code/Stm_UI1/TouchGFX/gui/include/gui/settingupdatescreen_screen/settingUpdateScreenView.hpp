#ifndef SETTINGUPDATESCREENVIEW_HPP
#define SETTINGUPDATESCREENVIEW_HPP

#include <gui_generated/settingupdatescreen_screen/settingUpdateScreenViewBase.hpp>
#include <gui/settingupdatescreen_screen/settingUpdateScreenPresenter.hpp>

class settingUpdateScreenView : public settingUpdateScreenViewBase
{
public:
    settingUpdateScreenView();
    virtual ~settingUpdateScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
	void homeTrigger();
	void backTrigger();
protected:
};

#endif // SETTINGUPDATESCREENVIEW_HPP
