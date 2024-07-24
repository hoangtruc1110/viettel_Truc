#ifndef VERIFYSCREENPRESENTER_HPP
#define VERIFYSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class verifyScreenView;

class verifyScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    verifyScreenPresenter(verifyScreenView& v);

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

    virtual ~verifyScreenPresenter() {}

    void setText();
    void selectTrigger();
    char* getVerifyText();
    uint8_t* getExamFlow();
    bool isDoctor();
private:
    verifyScreenPresenter();

    verifyScreenView& view;
};

#endif // VERIFYSCREENPRESENTER_HPP
