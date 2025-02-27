/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/notconnectedwifi_screen/notConnectedWifiViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

notConnectedWifiViewBase::notConnectedWifiViewBase()
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setPosition(0, 0, 240, 320);
    background.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(background);

    statusBar1.setXY(0, 0);
    add(statusBar1);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_REDBACKGROUND_ID));
    scalableImage1.setPosition(17, 76, 207, 80);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    wifiText_1.setPosition(24, 89, 163, 54);
    wifiText_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    wifiText_1.setLinespacing(0);
    wifiText_1.setWideTextAction(WIDE_TEXT_WORDWRAP_ELLIPSIS);
    wifiText_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M3F7));
    add(wifiText_1);
}

notConnectedWifiViewBase::~notConnectedWifiViewBase()
{

}

void notConnectedWifiViewBase::setupScreen()
{
    statusBar1.initialize();
}
