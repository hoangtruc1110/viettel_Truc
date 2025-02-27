#ifndef SCANSUCCESSSCREENPRESENTER_HPP
#define SCANSUCCESSSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class scanSuccessScreenView;

class scanSuccessScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    scanSuccessScreenPresenter(scanSuccessScreenView& v);

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

    virtual ~scanSuccessScreenPresenter() {}

private:
    scanSuccessScreenPresenter();

    scanSuccessScreenView& view;
};

#endif // SCANSUCCESSSCREENPRESENTER_HPP
