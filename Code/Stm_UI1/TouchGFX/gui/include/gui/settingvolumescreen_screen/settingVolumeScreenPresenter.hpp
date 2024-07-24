#ifndef SETTINGVOLUMESCREENPRESENTER_HPP
#define SETTINGVOLUMESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class settingVolumeScreenView;

class settingVolumeScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    settingVolumeScreenPresenter(settingVolumeScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~settingVolumeScreenPresenter() {}
    void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void upTrigger();
	void downTrigger();
	void updateVolume(uint8_t value);
private:
    settingVolumeScreenPresenter();

    settingVolumeScreenView& view;
};

#endif // SETTINGVOLUMESCREENPRESENTER_HPP
