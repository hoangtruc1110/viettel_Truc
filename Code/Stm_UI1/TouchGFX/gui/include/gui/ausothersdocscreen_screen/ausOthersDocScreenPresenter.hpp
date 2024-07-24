#ifndef AUSOTHERSDOCSCREENPRESENTER_HPP
#define AUSOTHERSDOCSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ausOthersDocScreenView;

class ausOthersDocScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ausOthersDocScreenPresenter(ausOthersDocScreenView& v);

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

    virtual ~ausOthersDocScreenPresenter() {}

private:
    ausOthersDocScreenPresenter();

    ausOthersDocScreenView& view;
};

#endif // AUSOTHERSDOCSCREENPRESENTER_HPP
