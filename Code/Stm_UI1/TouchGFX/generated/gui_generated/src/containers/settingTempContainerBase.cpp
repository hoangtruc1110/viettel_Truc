/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/settingTempContainerBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

settingTempContainerBase::settingTempContainerBase()
{
    setWidth(199);
    setHeight(54);
    box1.setPosition(5, 4, 189, 46);
    box1.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box1);

    box1_2.setPosition(5, 4, 10, 10);
    box1_2.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1_2);

    box1_1_1.setPosition(5, 40, 10, 10);
    box1_1_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1_1_1);

    box1_1_2.setPosition(184, 4, 10, 10);
    box1_1_2.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1_1_2);

    box1_1_2_1.setPosition(184, 40, 10, 10);
    box1_1_2_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1_1_2_1);

    circle1.setPosition(5, 4, 20, 20);
    circle1.setCenter(10, 10);
    circle1.setRadius(10);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1.setPainter(circle1Painter);
    add(circle1);

    circle1_1.setPosition(5, 30, 48, 20);
    circle1_1.setCenter(10, 10);
    circle1_1.setRadius(10);
    circle1_1.setLineWidth(0);
    circle1_1.setArc(0, 360);
    circle1_1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_1.setPainter(circle1_1Painter);
    add(circle1_1);

    circle1_2.setPosition(174, 4, 20, 20);
    circle1_2.setCenter(10, 10);
    circle1_2.setRadius(10);
    circle1_2.setLineWidth(0);
    circle1_2.setArc(0, 360);
    circle1_2Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_2.setPainter(circle1_2Painter);
    add(circle1_2);

    circle1_3.setPosition(174, 30, 20, 20);
    circle1_3.setCenter(10, 10);
    circle1_3.setRadius(10);
    circle1_3.setLineWidth(0);
    circle1_3.setArc(0, 360);
    circle1_3Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3.setPainter(circle1_3Painter);
    add(circle1_3);

    textArea1.setXY(18, 17);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ARG1).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LRSS));
    add(textArea1);

    tickImg.setXY(159, 15);
    tickImg.setBitmap(touchgfx::Bitmap(BITMAP_CHECK_CIRCLE_ID));
    tickImg.setVisible(false);
    add(tickImg);

    focusImg.setBitmap(touchgfx::Bitmap(BITMAP_CHOOSENDOTLINE_ID));
    focusImg.setPosition(0, 0, 199, 54);
    focusImg.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    focusImg.setVisible(false);
    add(focusImg);
}

settingTempContainerBase::~settingTempContainerBase()
{

}

void settingTempContainerBase::initialize()
{

}
