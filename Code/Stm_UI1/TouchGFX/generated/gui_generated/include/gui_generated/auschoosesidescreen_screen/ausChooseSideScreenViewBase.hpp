/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef AUSCHOOSESIDESCREENVIEWBASE_HPP
#define AUSCHOOSESIDESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/auschoosesidescreen_screen/ausChooseSideScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/StatusBar.hpp>
#include <gui/containers/ausChooseSideContainer.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>

class ausChooseSideScreenViewBase : public touchgfx::View<ausChooseSideScreenPresenter>
{
public:
    ausChooseSideScreenViewBase();
    virtual ~ausChooseSideScreenViewBase();
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

    /*
     * Virtual Action Handlers
     */
    virtual void rightTrigger()
    {
        // Override and implement this function in ausChooseSideScreen
    }
    virtual void leftTrigger()
    {
        // Override and implement this function in ausChooseSideScreen
    }
    virtual void selectTrigger()
    {
        // Override and implement this function in ausChooseSideScreen
    }
    virtual void backTrigger()
    {
        // Override and implement this function in ausChooseSideScreen
    }
    virtual void homeTrigger()
    {
        // Override and implement this function in ausChooseSideScreen
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
    ausChooseSideContainer leftContainer;
    ausChooseSideContainer rightContainer;
    touchgfx::TextArea textLeft;
    touchgfx::TextArea textRight;
    touchgfx::Image tickLeft;
    touchgfx::Image tickRight;
    touchgfx::ScalableImage focusLeft;
    touchgfx::ScalableImage focusRight;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // AUSCHOOSESIDESCREENVIEWBASE_HPP
