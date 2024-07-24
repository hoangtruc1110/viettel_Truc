/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef AUSCHOOSEDOCSCREENVIEWBASE_HPP
#define AUSCHOOSEDOCSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/auschoosedocscreen_screen/ausChooseDocScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/StatusBar.hpp>
#include <gui/containers/ausChooseDocContainer.hpp>

class ausChooseDocScreenViewBase : public touchgfx::View<ausChooseDocScreenPresenter>
{
public:
    ausChooseDocScreenViewBase();
    virtual ~ausChooseDocScreenViewBase();
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

    /*
     * Virtual Action Handlers
     */
    virtual void selectTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
    }
    virtual void upTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
    }
    virtual void rightTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
    }
    virtual void downTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
    }
    virtual void leftTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
    }
    virtual void backTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
    }
    virtual void homeTrigger()
    {
        // Override and implement this function in ausChooseDocScreen
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
    ausChooseDocContainer ausChooseDocContainer1;
    ausChooseDocContainer ausChooseDocContainer1_1;
    ausChooseDocContainer ausChooseDocContainer1_2;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // AUSCHOOSEDOCSCREENVIEWBASE_HPP
