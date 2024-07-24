/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/displayContainerBase.hpp>
#include <images/BitmapDatabase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

displayContainerBase::displayContainerBase()
{
    setWidth(96);
    setHeight(90);
    focusImg.setBitmap(touchgfx::Bitmap(BITMAP_FRAME_348_ID));
    focusImg.setPosition(0, 0, 96, 90);
    focusImg.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    focusImg.setVisible(false);
    add(focusImg);

    box1.setPosition(4, 4, 88, 82);
    box1.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box1);

    box2_2_1_3.setPosition(88, 82, 4, 4);
    box2_2_1_3.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_1_3);

    box2_2_1_2.setPosition(4, 82, 4, 4);
    box2_2_1_2.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_1_2);

    box2_2_1_1.setPosition(88, 4, 4, 4);
    box2_2_1_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_1_1);

    box2_2_1.setPosition(4, 4, 4, 4);
    box2_2_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box2_2_1);

    image4.setXY(34, 4);
    image4.setBitmap(touchgfx::Bitmap(BITMAP_ARROW_RIGHT_S_LINE_ID));
    add(image4);

    image5.setXY(34, 57);
    image5.setBitmap(touchgfx::Bitmap(BITMAP_ARROW_RIGHT_S_LINE_DOWN_ID));
    add(image5);

    box3.setPosition(32, 33, 32, 24);
    box3.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box3);

    box2_1.setPosition(32, 33, 4, 4);
    box2_1.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2_1);

    box2_2.setPosition(60, 33, 4, 4);
    box2_2.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2_2);

    box2_3.setPosition(32, 53, 4, 4);
    box2_3.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2_3);

    box2_4.setPosition(60, 53, 4, 4);
    box2_4.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2_4);

    circle1_3_1_1_1.setPosition(56, 33, 8, 8);
    circle1_3_1_1_1.setCenter(4, 4);
    circle1_3_1_1_1.setRadius(4);
    circle1_3_1_1_1.setLineWidth(0);
    circle1_3_1_1_1.setArc(0, 360);
    circle1_3_1_1_1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3_1_1_1.setPainter(circle1_3_1_1_1Painter);
    add(circle1_3_1_1_1);

    circle1_3_1_1.setPosition(32, 33, 8, 8);
    circle1_3_1_1.setCenter(4, 4);
    circle1_3_1_1.setRadius(4);
    circle1_3_1_1.setLineWidth(0);
    circle1_3_1_1.setArc(0, 360);
    circle1_3_1_1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3_1_1.setPainter(circle1_3_1_1Painter);
    add(circle1_3_1_1);

    circle1_3_1_1_2.setPosition(32, 49, 8, 8);
    circle1_3_1_1_2.setCenter(4, 4);
    circle1_3_1_1_2.setRadius(4);
    circle1_3_1_1_2.setLineWidth(0);
    circle1_3_1_1_2.setArc(0, 360);
    circle1_3_1_1_2Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3_1_1_2.setPainter(circle1_3_1_1_2Painter);
    add(circle1_3_1_1_2);

    circle1_3_1_1_3.setPosition(56, 49, 8, 8);
    circle1_3_1_1_3.setCenter(4, 4);
    circle1_3_1_1_3.setRadius(4);
    circle1_3_1_1_3.setLineWidth(0);
    circle1_3_1_1_3.setArc(0, 360);
    circle1_3_1_1_3Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3_1_1_3.setPainter(circle1_3_1_1_3Painter);
    add(circle1_3_1_1_3);

    textArea3.setPosition(32, 37, 32, 16);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_OH0J).getText());
    textArea3.setWildcard(textArea3Buffer);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6N3E));
    add(textArea3);

    circle1.setPosition(4, 4, 8, 8);
    circle1.setCenter(4, 4);
    circle1.setRadius(4);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1.setPainter(circle1Painter);
    add(circle1);

    circle1_2.setPosition(84, 4, 8, 8);
    circle1_2.setCenter(4, 4);
    circle1_2.setRadius(4);
    circle1_2.setLineWidth(0);
    circle1_2.setArc(0, 360);
    circle1_2Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_2.setPainter(circle1_2Painter);
    add(circle1_2);

    circle1_3.setPosition(4, 78, 8, 8);
    circle1_3.setCenter(4, 4);
    circle1_3.setRadius(4);
    circle1_3.setLineWidth(0);
    circle1_3.setArc(0, 360);
    circle1_3Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3.setPainter(circle1_3Painter);
    add(circle1_3);

    circle1_4.setPosition(84, 78, 8, 8);
    circle1_4.setCenter(4, 4);
    circle1_4.setRadius(4);
    circle1_4.setLineWidth(0);
    circle1_4.setArc(0, 360);
    circle1_4Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_4.setPainter(circle1_4Painter);
    add(circle1_4);
}

displayContainerBase::~displayContainerBase()
{

}

void displayContainerBase::initialize()
{

}
