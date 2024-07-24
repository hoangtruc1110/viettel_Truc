#ifndef SETTINGSCREENPRESENTER_HPP
#define SETTINGSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class settingScreenView;

class settingScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    settingScreenPresenter(settingScreenView& v);

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

    virtual ~settingScreenPresenter() {}
    void upTrigger();
    void rightTrigger();
    void downTrigger();
    void leftTrigger();
    void selectTrigger();
    void backTrigger();
    void homeTrigger();
private:
    settingScreenPresenter();

    settingScreenView& view;
};

#endif // SETTINGSCREENPRESENTER_HPP
