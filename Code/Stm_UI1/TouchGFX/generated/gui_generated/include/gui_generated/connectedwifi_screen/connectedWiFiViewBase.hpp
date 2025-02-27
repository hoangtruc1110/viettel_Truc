/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CONNECTEDWIFIVIEWBASE_HPP
#define CONNECTEDWIFIVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/connectedwifi_screen/connectedWiFiPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <gui/containers/StatusBar.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class connectedWiFiViewBase : public touchgfx::View<connectedWiFiPresenter>
{
public:
    connectedWiFiViewBase();
    virtual ~connectedWiFiViewBase();
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
    touchgfx::TextAreaWithOneWildcard nameWifiText;
    StatusBar statusBar1;
    touchgfx::Image image3;
    touchgfx::Container container1;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::Box box2;
    touchgfx::TextArea textArea1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t NAMEWIFITEXT_SIZE = 20;
    touchgfx::Unicode::UnicodeChar nameWifiTextBuffer[NAMEWIFITEXT_SIZE];

private:

};

#endif // CONNECTEDWIFIVIEWBASE_HPP
