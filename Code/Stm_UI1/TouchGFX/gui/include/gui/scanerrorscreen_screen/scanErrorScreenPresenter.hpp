#ifndef SCANERRORSCREENPRESENTER_HPP
#define SCANERRORSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class scanErrorScreenView;

class scanErrorScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    scanErrorScreenPresenter(scanErrorScreenView& v);

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

    virtual ~scanErrorScreenPresenter() {}

private:
    scanErrorScreenPresenter();

    scanErrorScreenView& view;
};

#endif // SCANERRORSCREENPRESENTER_HPP
