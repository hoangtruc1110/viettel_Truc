/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/followinstructionsscreen_screen/followInstructionsScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

followInstructionsScreenViewBase::followInstructionsScreenViewBase()
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1_1.setPosition(0, 0, 240, 320);
    box1_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1_1);

    nextButton.setBoxWithBorderPosition(0, 0, 68, 33);
    nextButton.setBorderSize(0);
    nextButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(86, 174, 255), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    nextButton.setText(TypedText(T___SINGLEUSE_62Z3));
    nextButton.setTextPosition(0, 2, 68, 33);
    nextButton.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255));
    nextButton.setPosition(86, 229, 68, 33);
    add(nextButton);

    statusBar1.setXY(0, 0);
    add(statusBar1);

    textArea1.setXY(15, 114);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RUJG));
    add(textArea1);
}

followInstructionsScreenViewBase::~followInstructionsScreenViewBase()
{

}

void followInstructionsScreenViewBase::setupScreen()
{
    statusBar1.initialize();
}
