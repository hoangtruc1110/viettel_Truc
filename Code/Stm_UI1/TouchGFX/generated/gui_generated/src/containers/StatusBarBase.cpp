/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/StatusBarBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

StatusBarBase::StatusBarBase()
{
    setWidth(240);
    setHeight(36);
    box1.setPosition(26, 8, 188, 20);
    box1.setColor(touchgfx::Color::getColorFromRGB(44, 47, 50));
    box1.setAlpha(0);
    add(box1);

    image1.setXY(194, 8);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_WIFI3_ID));
    add(image1);

    image2.setXY(26, 8);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_BATTERY_100_ID));
    add(image2);
}

StatusBarBase::~StatusBarBase()
{

}

void StatusBarBase::initialize()
{

}
