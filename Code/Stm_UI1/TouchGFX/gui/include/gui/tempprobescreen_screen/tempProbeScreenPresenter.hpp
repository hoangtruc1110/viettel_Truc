#ifndef TEMPPROBESCREENPRESENTER_HPP
#define TEMPPROBESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class tempProbeScreenView;

class tempProbeScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    tempProbeScreenPresenter(tempProbeScreenView& v);

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

    virtual ~tempProbeScreenPresenter() {}
//    virtual void setUartData(uint32_t uart_data){}
    virtual void setUartData(uint32_t uart_data);
    void updateResult(float valueF);

    virtual void uart_Data(char *data);

private:
    tempProbeScreenPresenter();

    tempProbeScreenView& view;
};

#endif // TEMPPROBESCREENPRESENTER_HPP
