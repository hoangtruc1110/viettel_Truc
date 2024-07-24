#include <gui/settingvolumescreen_screen/settingVolumeScreenView.hpp>
#include <gui/settingvolumescreen_screen/settingVolumeScreenPresenter.hpp>

settingVolumeScreenPresenter::settingVolumeScreenPresenter(settingVolumeScreenView& v)
    : view(v)
{

}

void settingVolumeScreenPresenter::activate()
{

}

void settingVolumeScreenPresenter::deactivate()
{

}
void settingVolumeScreenPresenter::selectTrigger(){

}
void settingVolumeScreenPresenter::homeTrigger(){

}
void settingVolumeScreenPresenter::backTrigger(){

}
void settingVolumeScreenPresenter::upTrigger(){
	if(view.volume < view.volume_max){
		view.volume++;
		updateVolume(view.volume);
	}
}
void settingVolumeScreenPresenter::downTrigger(){
	if(view.volume > 0){
		view.volume--;
		updateVolume(view.volume);
	}
}
void settingVolumeScreenPresenter::updateVolume(uint8_t value){
	if(value < 0){
		view.volume = 0;
	}else if(value > view.volume_max){
		view.volume = view.volume_max;
	}else
		view.volume = value;
	view.updateVolume();
}
