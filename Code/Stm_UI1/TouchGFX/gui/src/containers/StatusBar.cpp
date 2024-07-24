#include <gui/containers/StatusBar.hpp>
#include "BitmapDatabase.hpp"

StatusBar::StatusBar()
{

}

void StatusBar::initialize()
{
    StatusBarBase::initialize();
}

void StatusBar::updateBatIcon(uint8_t value)
{
	BitmapId id;
	if(value >= 90)
		id = BITMAP_BATTERY_100_ID;
	else if(value >= 75)
		id = BITMAP_BATTERY_75_ID;
	else if(value >= 50)
		id = BITMAP_BATTERY_50_ID;
	else if(value >= 10)
		id = BITMAP_BATTERY_25_ID;
	else
		id = BITMAP_BATTERY_0_ID;
	image2.setBitmap(Bitmap(id));
	image2.invalidate();
}

void StatusBar::updateWiFiIcon(uint8_t value)
{
	BitmapId id;
	if(value >= 75)
		id = BITMAP_WIFI3_ID;
	else if(value >= 50)
		id = BITMAP_WIFI2_ID;
	else if(value >= 25)
		id = BITMAP_WIFI1_ID;
	else
		id = BITMAP_WIFI0_ID;
	image1.setBitmap(Bitmap(id));
	image1.invalidate();
}
