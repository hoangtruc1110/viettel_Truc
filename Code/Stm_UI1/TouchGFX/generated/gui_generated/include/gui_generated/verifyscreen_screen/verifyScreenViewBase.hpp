/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef VERIFYSCREENVIEWBASE_HPP
#define VERIFYSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/verifyscreen_screen/verifyScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/StatusBar.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class verifyScreenViewBase : public touchgfx::View<verifyScreenPresenter>
{
public:
    verifyScreenViewBase();
    virtual ~verifyScreenViewBase();
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

    /*
     * Virtual Action Handlers
     */
    virtual void selectTrigger()
    {
        // Override and implement this function in verifyScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    StatusBar statusBar1;
    touchgfx::Image buttonNext;
    touchgfx::TextAreaWithOneWildcard textInfo;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTINFO_SIZE = 115;
    touchgfx::Unicode::UnicodeChar textInfoBuffer[TEXTINFO_SIZE];

private:

};

#endif // VERIFYSCREENVIEWBASE_HPP
