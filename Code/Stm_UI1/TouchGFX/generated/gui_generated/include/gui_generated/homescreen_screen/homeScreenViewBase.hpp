/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HOMESCREENVIEWBASE_HPP
#define HOMESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/homescreen_screen/homeScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <gui/containers/StatusBar.hpp>
#include <gui/containers/profileItemContainer.hpp>
#include <gui/containers/profileOtherContainer.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>

class homeScreenViewBase : public touchgfx::View<homeScreenPresenter>
{
public:
    homeScreenViewBase();
    virtual ~homeScreenViewBase();
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

    /*
     * Virtual Action Handlers
     */
    virtual void selectTrigger()
    {
        // Override and implement this function in homeScreen
    }
    virtual void upTrigger()
    {
        // Override and implement this function in homeScreen
    }
    virtual void rightTrigger()
    {
        // Override and implement this function in homeScreen
    }
    virtual void downTrigger()
    {
        // Override and implement this function in homeScreen
    }
    virtual void leftTrigger()
    {
        // Override and implement this function in homeScreen
    }
    virtual void backTrigger()
    {
        // Override and implement this function in homeScreen
    }
    virtual void homeTrigger()
    {
        // Override and implement this function in homeScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::TextArea petProfilesText;
    StatusBar statusBar1;
    profileItemContainer profileItemContainer1;
    profileItemContainer profileItemContainer2;
    profileOtherContainer profileOtherContainer1;
    touchgfx::TextArea scanText;
    profileOtherContainer profileOtherContainer2;
    touchgfx::TextArea addText;
    touchgfx::Image image3;
    touchgfx::Image image4;
    touchgfx::BoxWithBorder settingFocus;
    touchgfx::Image image5;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // HOMESCREENVIEWBASE_HPP
