#ifndef SETTINGDISPLAYSCREENPRESENTER_HPP
#define SETTINGDISPLAYSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class settingDisplayScreenView;

class settingDisplayScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    settingDisplayScreenPresenter(settingDisplayScreenView& v);

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

    virtual ~settingDisplayScreenPresenter() {}
    void selectTrigger();
	void homeTrigger();
	void backTrigger();
	void rightTrigger();
	void leftTrigger();
	void upTrigger();
	void downTrigger();
private:
    settingDisplayScreenPresenter();

    settingDisplayScreenView& view;
};

#endif // SETTINGDISPLAYSCREENPRESENTER_HPP
