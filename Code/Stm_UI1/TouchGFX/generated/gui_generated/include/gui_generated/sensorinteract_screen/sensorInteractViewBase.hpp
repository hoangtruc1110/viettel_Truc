/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SENSORINTERACTVIEWBASE_HPP
#define SENSORINTERACTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/sensorinteract_screen/sensorInteractPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/StatusBar.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class sensorInteractViewBase : public touchgfx::View<sensorInteractPresenter>
{
public:
    sensorInteractViewBase();
    virtual ~sensorInteractViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1_1;
    StatusBar statusBar1;
    touchgfx::Image image3;
    touchgfx::TextArea textArea1;

private:

};

#endif // SENSORINTERACTVIEWBASE_HPP
