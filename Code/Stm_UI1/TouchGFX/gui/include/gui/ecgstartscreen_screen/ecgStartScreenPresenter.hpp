#ifndef ECGSTARTSCREENPRESENTER_HPP
#define ECGSTARTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ecgStartScreenView;

class ecgStartScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ecgStartScreenPresenter(ecgStartScreenView& v);

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

    virtual ~ecgStartScreenPresenter() {}

    void setDoneState(uint8_t isDone);
    void selectTrigger();
    void addGraphPoint();
    void readBPM();
private:
    ecgStartScreenPresenter();

    ecgStartScreenView& view;
};

#endif // ECGSTARTSCREENPRESENTER_HPP
