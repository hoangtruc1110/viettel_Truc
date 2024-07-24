#ifndef TEMPRESULTSCREENPRESENTER_HPP
#define TEMPRESULTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class tempResultScreenView;

class tempResultScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    tempResultScreenPresenter(tempResultScreenView& v);

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

    virtual ~tempResultScreenPresenter() {}

    void updateResult(float valueF);
    virtual void uart_Data(char *data);
    void setDoneState(uint8_t isDone);
    void selectTrigger();
private:
    tempResultScreenPresenter();

    tempResultScreenView& view;
};

#endif // TEMPRESULTSCREENPRESENTER_HPP
