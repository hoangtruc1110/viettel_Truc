/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/realtimeecgscreen_screen/realTimeEcgScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

realTimeEcgScreenViewBase::realTimeEcgScreenViewBase()
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1_1.setPosition(0, 0, 240, 320);
    box1_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1_1);

    statusBar1.setXY(0, 0);
    add(statusBar1);

    box2.setPosition(20, 51, 200, 94);
    box2.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2);

    box2_1.setPosition(20, 154, 200, 94);
    box2_1.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2_1);

    textArea1.setXY(91, 18);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4L75));
    add(textArea1);

    textArea2.setXY(36, 180);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CHGP));
    add(textArea2);

    textArea2_1.setXY(168, 206);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZEI3));
    add(textArea2_1);

    textArea2_1_1.setXY(97, 63);
    textArea2_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B0AK));
    add(textArea2_1_1);

    spo2Text.setXY(109, 201);
    spo2Text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    spo2Text.setLinespacing(0);
    spo2Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4R7A));
    add(spo2Text);

    saveStatus.setXY(64, 258);
    saveStatus.setBitmap(touchgfx::Bitmap(BITMAP_SAVEIMAGES_ID));
    add(saveStatus);
}

realTimeEcgScreenViewBase::~realTimeEcgScreenViewBase()
{

}

void realTimeEcgScreenViewBase::setupScreen()
{
    statusBar1.initialize();
}
