#ifndef SETTINGVOLUMESCREENVIEW_HPP
#define SETTINGVOLUMESCREENVIEW_HPP

#include <gui_generated/settingvolumescreen_screen/settingVolumeScreenViewBase.hpp>
#include <gui/settingvolumescreen_screen/settingVolumeScreenPresenter.hpp>

class settingVolumeScreenView : public settingVolumeScreenViewBase
{
public:
    settingVolumeScreenView();
    virtual ~settingVolumeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void upTrigger();
	void downTrigger();
	void updateVolume();

	uint8_t volume;
	const uint8_t volume_max = 10;
protected:
};

#endif // SETTINGVOLUMESCREENVIEW_HPP
