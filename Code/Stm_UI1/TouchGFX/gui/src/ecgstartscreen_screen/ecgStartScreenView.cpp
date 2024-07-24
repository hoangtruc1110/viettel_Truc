#include <gui/ecgstartscreen_screen/ecgStartScreenView.hpp>

ecgStartScreenView::ecgStartScreenView():tick(0), isStart(false), runTimeSeconds(15), isDone(false)
{

}

void ecgStartScreenView::setupScreen()
{
    ecgStartScreenViewBase::setupScreen();
}

void ecgStartScreenView::tearDownScreen()
{
    ecgStartScreenViewBase::tearDownScreen();
}

void ecgStartScreenView::handleTickEvent(){
	if(isStart){
		tick++;
		if(tick%100 == 0){
			presenter->addGraphPoint();
		}
		if(tick%1000 == 0){
			presenter->readBPM();
			runTimeSeconds--;
			updateSecondCount();

		}
		if(tick%500 == 0){
			blinkSignal();
		}
		if(tick%60000 == 0)
			tick = 0;

		if(runTimeSeconds==0){
			setState(2);
			tick=0;
		}
	}
	if(isDone){
		tick++;
		if(tick%3000==0){
			gotoNextScreen();
		}
	}
}

void ecgStartScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void ecgStartScreenView::backTrigger(){}
void ecgStartScreenView::homeTrigger(){}

void ecgStartScreenView::setState(uint8_t state){
	container1.setVisible(false);
	savedImg.setVisible(false);
	startImg.setVisible(false);

	switch(state){
	case 0:
		startImg.setVisible(true);
		isStart = false;
		break;
	case 1:
		container1.setVisible(true);
		isStart = true;
		break;
	case 2:
		savedImg.setVisible(true);
		isStart = false;
		isDone = true;
		break;
	}

	container1.invalidate();
	savedImg.invalidate();
	startImg.invalidate();
}

void ecgStartScreenView::addGraphPoint(uint8_t value){
	graph.addDataPoint(value);
	graph.invalidate();
}

void ecgStartScreenView::setBPM(uint8_t value){
	touchgfx::Unicode::snprintf(heartRateBuffer,HEARTRATE_SIZE,"%i", value);
	heartRate.invalidate();
}

void ecgStartScreenView::blinkSignal(){
	countBlink.setVisible(!countBlink.isVisible());
	countBlink.invalidate();
}

void ecgStartScreenView::updateSecondCount(){
	touchgfx::Unicode::snprintf(secondCountBuffer,SECONDCOUNT_SIZE,"%i", runTimeSeconds );
	secondCount.invalidate();
}

void ecgStartScreenView::gotoNextScreen(){
	presenter->setDoneState(true);
	application().gotoexaminationScreenScreenNoTransition();
}
