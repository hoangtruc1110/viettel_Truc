/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settingvolumescreen_screen/settingVolumeScreenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

settingVolumeScreenViewBase::settingVolumeScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1);

    textArea1.setXY(67, 55);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JSL0));
    add(textArea1);

    image3.setXY(34, 52);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_VOLUME_DOWN_LINE_BIG_ID));
    add(image3);

    statusBar1.setXY(0, 0);
    add(statusBar1);

    box2.setPosition(68, 93, 104, 188);
    box2.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    add(box2);

    box3.setPosition(68, 93, 6, 6);
    box3.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box3);

    box3_1.setPosition(166, 93, 6, 6);
    box3_1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box3_1);

    box3_2.setPosition(68, 275, 6, 6);
    box3_2.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box3_2);

    box3_3.setPosition(166, 275, 6, 6);
    box3_3.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box3_3);

    circle1.setPosition(68, 93, 12, 12);
    circle1.setCenter(6, 6);
    circle1.setRadius(6);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1.setPainter(circle1Painter);
    add(circle1);

    circle1_1.setPosition(160, 93, 12, 12);
    circle1_1.setCenter(6, 6);
    circle1_1.setRadius(6);
    circle1_1.setLineWidth(0);
    circle1_1.setArc(0, 360);
    circle1_1Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_1.setPainter(circle1_1Painter);
    add(circle1_1);

    circle1_2.setPosition(68, 269, 12, 12);
    circle1_2.setCenter(6, 6);
    circle1_2.setRadius(6);
    circle1_2.setLineWidth(0);
    circle1_2.setArc(0, 360);
    circle1_2Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_2.setPainter(circle1_2Painter);
    add(circle1_2);

    circle1_3.setPosition(160, 269, 12, 12);
    circle1_3.setCenter(6, 6);
    circle1_3.setRadius(6);
    circle1_3.setLineWidth(0);
    circle1_3.setArc(0, 360);
    circle1_3Painter.setColor(touchgfx::Color::getColorFromRGB(17, 27, 36));
    circle1_3.setPainter(circle1_3Painter);
    add(circle1_3);

    image4.setXY(106, 93);
    image4.setBitmap(touchgfx::Bitmap(BITMAP_ARROW_RIGHT_S_LINE_ID));
    add(image4);

    image5.setXY(106, 252);
    image5.setBitmap(touchgfx::Bitmap(BITMAP_ARROW_RIGHT_S_LINE_DOWN_ID));
    add(image5);

    volumeRate.setXY(93, 120);
    volumeRate.setProgressIndicatorPosition(1, 0, 53, 133);
    volumeRate.setRange(0, 10);
    volumeRate.setDirection(touchgfx::AbstractDirectionProgress::UP);
    volumeRate.setBackground(touchgfx::Bitmap(BITMAP_VOLUMEBACKGROUND_ID));
    volumeRate.setBitmap(BITMAP_RECTANGLE_23_ID);
    volumeRate.setValue(0);
    volumeRate.setAnchorAtZero(true);
    add(volumeRate);

    volumeValue.setPosition(103, 169, 35, 36);
    volumeValue.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    volumeValue.setLinespacing(0);
    Unicode::snprintf(volumeValueBuffer, VOLUMEVALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_AJUU).getText());
    volumeValue.setWildcard(volumeValueBuffer);
    volumeValue.setTypedText(touchgfx::TypedText(T___SINGLEUSE_A725));
    add(volumeValue);
}

settingVolumeScreenViewBase::~settingVolumeScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void settingVolumeScreenViewBase::setupScreen()
{
    statusBar1.initialize();
}

void settingVolumeScreenViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction1
        //When hardware button 0 clicked call virtual function
        //Call selectTrigger
        selectTrigger();
    
    }

    if(1 == key)
    {
        //Interaction2
        //When hardware button 1 clicked call virtual function
        //Call upTrigger
        upTrigger();
    
    }

    if(2 == key)
    {
        //Interaction3
        //When hardware button 2 clicked call virtual function
        //Call rightTrigger
        rightTrigger();
    
    }

    if(3 == key)
    {
        //Interaction4
        //When hardware button 3 clicked call virtual function
        //Call downTrigger
        downTrigger();
    
    }

    if(4 == key)
    {
        //Interaction5
        //When hardware button 4 clicked call virtual function
        //Call leftTrigger
        leftTrigger();
    
    }

    if(5 == key)
    {
        //Interaction6
        //When hardware button 5 clicked call virtual function
        //Call backTrigger
        backTrigger();
    
    }

    if(6 == key)
    {
        //Interaction7
        //When hardware button 6 clicked call virtual function
        //Call homeTrigger
        homeTrigger();
    
    }
}
