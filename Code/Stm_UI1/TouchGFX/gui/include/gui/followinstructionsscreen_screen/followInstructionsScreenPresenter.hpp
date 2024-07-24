#ifndef FOLLOWINSTRUCTIONSSCREENPRESENTER_HPP
#define FOLLOWINSTRUCTIONSSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class followInstructionsScreenView;

class followInstructionsScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    followInstructionsScreenPresenter(followInstructionsScreenView& v);

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

    virtual ~followInstructionsScreenPresenter() {}

private:
    followInstructionsScreenPresenter();

    followInstructionsScreenView& view;
};

#endif // FOLLOWINSTRUCTIONSSCREENPRESENTER_HPP
