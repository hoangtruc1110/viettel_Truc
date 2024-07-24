#ifndef LOGOSCREENPRESENTER_HPP
#define LOGOSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class logoScreenView;

class logoScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    logoScreenPresenter(logoScreenView& v);

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

    virtual ~logoScreenPresenter() {}

private:
    logoScreenPresenter();

    logoScreenView& view;
};

#endif // LOGOSCREENPRESENTER_HPP
