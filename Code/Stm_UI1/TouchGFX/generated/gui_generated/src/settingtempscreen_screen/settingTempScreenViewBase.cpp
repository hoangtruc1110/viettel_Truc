/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settingtempscreen_screen/settingTempScreenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

settingTempScreenViewBase::settingTempScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(15, 15, 15));
    add(box1);

    statusBar1.setXY(0, 0);
    add(statusBar1);

    textArea1_1.setXY(52, 41);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8JHT));
    add(textArea1_1);

    image3.setXY(27, 41);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_TEMP_HOT_FILL_ID));
    add(image3);

    textArea1.setXY(106, 90);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(156, 156, 156));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0NZX));
    add(textArea1);

    settingTempContainer1.setXY(21, 116);
    add(settingTempContainer1);

    settingTempContainer2.setXY(21, 170);
    add(settingTempContainer2);
}

settingTempScreenViewBase::~settingTempScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void settingTempScreenViewBase::setupScreen()
{
    statusBar1.initialize();
    settingTempContainer1.initialize();
    settingTempContainer2.initialize();
}

void settingTempScreenViewBase::handleKeyEvent(uint8_t key)
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
