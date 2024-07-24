#ifndef LIVEMODESCREENPRESENTER_HPP
#define LIVEMODESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class liveModeScreenView;

class liveModeScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    liveModeScreenPresenter(liveModeScreenView& v);

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

    virtual ~liveModeScreenPresenter() {}

private:
    liveModeScreenPresenter();

    liveModeScreenView& view;
};

#endif // LIVEMODESCREENPRESENTER_HPP
