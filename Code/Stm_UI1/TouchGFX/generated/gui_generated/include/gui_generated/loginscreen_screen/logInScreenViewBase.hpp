/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef LOGINSCREENVIEWBASE_HPP
#define LOGINSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/loginscreen_screen/logInScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/containers/StatusBar.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class logInScreenViewBase : public touchgfx::View<logInScreenPresenter>
{
public:
    logInScreenViewBase();
    virtual ~logInScreenViewBase();
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
    touchgfx::TextArea textArea2;

private:

};

#endif // LOGINSCREENVIEWBASE_HPP
