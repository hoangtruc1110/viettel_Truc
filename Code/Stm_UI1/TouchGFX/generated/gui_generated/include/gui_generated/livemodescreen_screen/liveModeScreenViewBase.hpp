/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef LIVEMODESCREENVIEWBASE_HPP
#define LIVEMODESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/livemodescreen_screen/liveModeScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/StatusBar.hpp>
#include <gui/containers/callContainer.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class liveModeScreenViewBase : public touchgfx::View<liveModeScreenPresenter>
{
public:
    liveModeScreenViewBase();
    virtual ~liveModeScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    StatusBar statusBar1;
    callContainer callContainer1;
    callContainer callContainer2;
    touchgfx::TextArea liveCallText;
    touchgfx::TextArea forwardCallText;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // LIVEMODESCREENVIEWBASE_HPP
