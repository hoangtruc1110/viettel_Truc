#ifndef SETTINGTEMPSCREENPRESENTER_HPP
#define SETTINGTEMPSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class settingTempScreenView;

class settingTempScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    settingTempScreenPresenter(settingTempScreenView& v);

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

    virtual ~settingTempScreenPresenter() {}
    void upTrigger();
	void downTrigger();
	void setTempUnit();
private:
    settingTempScreenPresenter();

    settingTempScreenView& view;
};

#endif // SETTINGTEMPSCREENPRESENTER_HPP
