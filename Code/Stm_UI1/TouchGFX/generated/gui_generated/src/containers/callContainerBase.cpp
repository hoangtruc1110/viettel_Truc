/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/callContainerBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

callContainerBase::callContainerBase()
{
    setWidth(155);
    setHeight(64);
    box1.setPosition(4, 4, 147, 56);
    box1.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box1);

    box2_2_3.setPosition(4, 56, 4, 4);
    box2_2_3.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_3);

    box2_2_2.setPosition(4, 4, 4, 4);
    box2_2_2.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_2);

    box2_2_1.setPosition(147, 56, 4, 4);
    box2_2_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_1);

    box2_2.setPosition(147, 4, 4, 4);
    box2_2.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2);

    circle1_3.setPosition(4, 52, 8, 8);
    circle1_3.setCenter(4, 4);
    circle1_3.setRadius(4);
    circle1_3.setLineWidth(0);
    circle1_3.setArc(0, 360);
    circle1_3Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3.setPainter(circle1_3Painter);
    add(circle1_3);

    circle1.setPosition(4, 4, 8, 8);
    circle1.setCenter(4, 4);
    circle1.setRadius(4);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1.setPainter(circle1Painter);
    add(circle1);

    circle1_4.setPosition(143, 52, 8, 8);
    circle1_4.setCenter(4, 4);
    circle1_4.setRadius(4);
    circle1_4.setLineWidth(0);
    circle1_4.setArc(0, 360);
    circle1_4Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_4.setPainter(circle1_4Painter);
    add(circle1_4);

    circle1_1.setPosition(143, 4, 8, 8);
    circle1_1.setCenter(4, 4);
    circle1_1.setRadius(4);
    circle1_1.setLineWidth(0);
    circle1_1.setArc(0, 360);
    circle1_1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_1.setPainter(circle1_1Painter);
    add(circle1_1);

    focusImg.setBitmap(touchgfx::Bitmap(BITMAP_CHOOSENDOTLINE_ID));
    focusImg.setPosition(0, 0, 155, 64);
    focusImg.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    focusImg.setVisible(false);
    add(focusImg);
}

callContainerBase::~callContainerBase()
{

}

void callContainerBase::initialize()
{

}
