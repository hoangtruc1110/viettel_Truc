/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settingdisplayscreen_screen/settingDisplayScreenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

settingDisplayScreenViewBase::settingDisplayScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1);

    textArea1.setXY(52, 41);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_S0T7));
    add(textArea1);

    image3.setXY(27, 41);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_CONTRAST_LINE_ID));
    add(image3);

    statusBar1.setXY(0, 0);
    add(statusBar1);

    textArea2.setXY(30, 99);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(156, 156, 156));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8LBV));
    add(textArea2);

    textArea2_1.setXY(127, 99);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(156, 156, 156));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B9Y4));
    add(textArea2_1);

    displayContainer1.setXY(24, 124);
    add(displayContainer1);

    displayContainer2.setXY(120, 124);
    add(displayContainer2);
}

settingDisplayScreenViewBase::~settingDisplayScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void settingDisplayScreenViewBase::setupScreen()
{
    statusBar1.initialize();
    displayContainer1.initialize();
    displayContainer2.initialize();
}

void settingDisplayScreenViewBase::handleKeyEvent(uint8_t key)
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
