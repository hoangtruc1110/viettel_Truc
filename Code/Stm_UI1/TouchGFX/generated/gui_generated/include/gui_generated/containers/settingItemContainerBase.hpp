/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SETTINGITEMCONTAINERBASE_HPP
#define SETTINGITEMCONTAINERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>

class settingItemContainerBase : public touchgfx::Container
{
public:
    settingItemContainerBase();
    virtual ~settingItemContainerBase();
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::Box box1_1;
    touchgfx::Box box1_1_1;
    touchgfx::Box box1_1_2;
    touchgfx::Box box1_1_2_1;
    touchgfx::Circle circle1;
    touchgfx::PainterRGB565 circle1Painter;
    touchgfx::Circle circle1_1;
    touchgfx::PainterRGB565 circle1_1Painter;
    touchgfx::Circle circle1_2;
    touchgfx::PainterRGB565 circle1_2Painter;
    touchgfx::Circle circle1_3;
    touchgfx::PainterRGB565 circle1_3Painter;
    touchgfx::Image settingIcon;
    touchgfx::TextAreaWithOneWildcard settingName;
    touchgfx::Image image2;
    touchgfx::ScalableImage focusImg;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SETTINGNAME_SIZE = 20;
    touchgfx::Unicode::UnicodeChar settingNameBuffer[SETTINGNAME_SIZE];

private:

};

#endif // SETTINGITEMCONTAINERBASE_HPP
