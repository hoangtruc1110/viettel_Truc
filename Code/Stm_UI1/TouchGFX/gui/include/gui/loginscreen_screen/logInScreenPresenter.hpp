#ifndef LOGINSCREENPRESENTER_HPP
#define LOGINSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class logInScreenView;

class logInScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    logInScreenPresenter(logInScreenView& v);

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

    virtual ~logInScreenPresenter() {}

private:
    logInScreenPresenter();

    logInScreenView& view;
};

#endif // LOGINSCREENPRESENTER_HPP
