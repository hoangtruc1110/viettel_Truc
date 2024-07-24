#ifndef LOGOUTSCREENPRESENTER_HPP
#define LOGOUTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class logOutScreenView;

class logOutScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    logOutScreenPresenter(logOutScreenView& v);

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

    virtual ~logOutScreenPresenter() {}

private:
    logOutScreenPresenter();

    logOutScreenView& view;
};

#endif // LOGOUTSCREENPRESENTER_HPP
