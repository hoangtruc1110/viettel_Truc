/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/blueRecContainerBase.hpp>
#include <images/BitmapDatabase.hpp>

blueRecContainerBase::blueRecContainerBase()
{
    setWidth(122);
    setHeight(37);
    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_DOTREC_ID));
    scalableImage1.setPosition(0, 0, 122, 37);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BLUEREC_ID));
    scalableImage2.setPosition(3, 3, 115, 30);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage2);
}

blueRecContainerBase::~blueRecContainerBase()
{

}

void blueRecContainerBase::initialize()
{

}
