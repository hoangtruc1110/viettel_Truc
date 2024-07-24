#ifndef AUSPROCESSSCREENPRESENTER_HPP
#define AUSPROCESSSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ausProcessScreenView;

class ausProcessScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ausProcessScreenPresenter(ausProcessScreenView& v);

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

    virtual ~ausProcessScreenPresenter() {}
    void selectTrigger();
private:
    ausProcessScreenPresenter();

    ausProcessScreenView& view;
};

#endif // AUSPROCESSSCREENPRESENTER_HPP
