#include <gui/heartbreakstartscreen_screen/heartBreakStartScreenView.hpp>
#include <stdio.h>
heartBreakStartScreenView::heartBreakStartScreenView(): isStart(false), isDone(false), tick(0), runTimeSeconds(10)
{

}

void heartBreakStartScreenView::setupScreen()
{
    heartBreakStartScreenViewBase::setupScreen();
}

void heartBreakStartScreenView::tearDownScreen()
{
    heartBreakStartScreenViewBase::tearDownScreen();
}

void heartBreakStartScreenView::handleTickEvent(){
	if(isStart){
		tick++;

		if(tick%1000 == 0){
			presenter->readBPM();
			presenter->readSPO2();
			runTimeSeconds--;
		}
		if(tick%500 == 0){
			blinkSignal();
		}
		if(tick%60000 == 0)
			tick = 0;
		if(runTimeSeconds == 0){
			isDone = true;
			changeState(2);
			tick = 0;
		}
	}
	if(isDone){
		tick++;
		if(tick%3000 == 0){
			gotoNextScreen();
		}
	}
}

void heartBreakStartScreenView::selectTrigger(){
	presenter->selectTrigger();
}


void heartBreakStartScreenView::changeState(uint8_t state){
	container1.setVisible(false);
	saveExitButton.setVisible(false);
	sinalQualityText.setVisible(false);
	startButton.setVisible(false);
	savedImg.setVisible(false);

	switch(state){
	case 0:
		startButton.setVisible(true);
		isStart = false;
		break;
	case 1:
		isStart = true;
		container1.setVisible(true);
		sinalQualityText.setVisible(true);
		break;
	case 2:
		if(presenter->isDoctor())
			saveExitButton.setVisible(true);
		else{
			savedImg.setVisible(true);
			isStart = false;
		}

		break;
	default:
		break;
	}

	container1.invalidate();
	saveExitButton.invalidate();
	sinalQualityText.invalidate();
	startButton.invalidate();
	savedImg.invalidate();
}

void heartBreakStartScreenView::setBPM(uint8_t value){
	touchgfx::Unicode::snprintf(heartRateBuffer,HEARTRATE_SIZE,"%i", value);
	heartRate.invalidate();
	bpmProcess.setValue(value);
	bpmProcess.invalidate();
}
void heartBreakStartScreenView::setSPO2(uint8_t value){
	touchgfx::Unicode::snprintf(spo2Buffer,SPO2_SIZE,"%i", value);
	spo2.invalidate();
}
void heartBreakStartScreenView::setPI(const char* text){
	touchgfx::Unicode::strncpy(piTextBuffer, "string", PITEXT_SIZE);
	piText.resizeToCurrentText(); // optional, will resize the box to fit the text if it is too small
	piText.invalidate();
}

void heartBreakStartScreenView::blinkSignal(){
	signalBlink.setVisible(!signalBlink.isVisible());
	signalBlink.invalidate();
}

void heartBreakStartScreenView::gotoNextScreen(){
	presenter->setDoneState(true);
	application().gotoexaminationScreenScreenNoTransition();
}


void heartBreakStartScreenView::uart_Data(char *data)
{
	int heart, spo2;
	char *heart_str, *spo2_str;

	// Tìm vị trí của chuỗi "temp: "
	heart_str = strstr(data, "heart: ");
	if (heart_str)
	{
		// Trích xuất giá trị của temp
		sscanf(heart_str, "heart: %d", &heart);
	}

	spo2_str = strstr(data, "spo2: ");
	if (spo2_str)
	{
		// Trích xuất giá trị của temp
		sscanf(spo2_str, "spo2: %d", &spo2);
	}

	setBPM(heart);
	setSPO2(spo2);
}

