#ifndef HEARTBREAKSTARTSCREENPRESENTER_HPP
#define HEARTBREAKSTARTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class heartBreakStartScreenView;

class heartBreakStartScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    heartBreakStartScreenPresenter(heartBreakStartScreenView& v);

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

    virtual ~heartBreakStartScreenPresenter() {}
    void selectTrigger();
    void readBPM();
    void readSPO2();
    bool isDoctor();
    void setDoneState(uint8_t isDone);

    virtual void uart_Data(char *data);

private:
    heartBreakStartScreenPresenter();

    heartBreakStartScreenView& view;
};

#endif // HEARTBREAKSTARTSCREENPRESENTER_HPP
