#include <gui/settingvolumescreen_screen/settingVolumeScreenView.hpp>

settingVolumeScreenView::settingVolumeScreenView()
{

}

void settingVolumeScreenView::setupScreen()
{
    settingVolumeScreenViewBase::setupScreen();
    volume = 5;
    updateVolume();
}

void settingVolumeScreenView::tearDownScreen()
{
    settingVolumeScreenViewBase::tearDownScreen();
}
void settingVolumeScreenView::selectTrigger(){}
void settingVolumeScreenView::homeTrigger(){}
void settingVolumeScreenView::backTrigger(){
	application().gotosettingScreenScreenNoTransition();
}
void settingVolumeScreenView::upTrigger(){
	presenter->upTrigger();
}
void settingVolumeScreenView::downTrigger(){
	presenter->downTrigger();
}
void settingVolumeScreenView::updateVolume(){
	volumeRate.setValue(volume);
	volumeRate.invalidate();
	touchgfx::Unicode::snprintf(volumeValueBuffer, VOLUMEVALUE_SIZE,"%i", volume);
	volumeValue.invalidate();
}
