#ifndef SENSORINTERACTPRESENTER_HPP
#define SENSORINTERACTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sensorInteractView;

class sensorInteractPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sensorInteractPresenter(sensorInteractView& v);

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

    virtual ~sensorInteractPresenter() {}

private:
    sensorInteractPresenter();

    sensorInteractView& view;
};

#endif // SENSORINTERACTPRESENTER_HPP
