#ifndef TEMPPROCESSSCREENPRESENTER_HPP
#define TEMPPROCESSSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class tempProcessScreenView;

class tempProcessScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    tempProcessScreenPresenter(tempProcessScreenView& v);

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

    virtual ~tempProcessScreenPresenter() {}

private:
    tempProcessScreenPresenter();

    tempProcessScreenView& view;
};

#endif // TEMPPROCESSSCREENPRESENTER_HPP
