#ifndef EXAMINATIONSCREENPRESENTER_HPP
#define EXAMINATIONSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class examinationScreenView;

class examinationScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    examinationScreenPresenter(examinationScreenView& v);

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

    virtual ~examinationScreenPresenter() {}
    void readWiFiRSSI();
    void readBattery();
    void upTrigger();
	void rightTrigger();
	void downTrigger();
	void leftTrigger();
	void selectTrigger();
	bool isDoctor();
    uint8_t* getExamState();
    uint8_t* getExamFlow();
    void setExamFlow(uint8_t flowType, uint8_t value);
private:
    examinationScreenPresenter();

    examinationScreenView& view;
};

#endif // EXAMINATIONSCREENPRESENTER_HPP
