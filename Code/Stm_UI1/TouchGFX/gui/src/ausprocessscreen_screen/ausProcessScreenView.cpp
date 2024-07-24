#include <gui/ausprocessscreen_screen/ausProcessScreenView.hpp>

ausProcessScreenView::ausProcessScreenView():tick(0), second(15), isStart(false)
{
	touchgfx::Unicode::snprintf(countBuffer,COUNT_SIZE,"%i", second );
	count.invalidate();
}

void ausProcessScreenView::setupScreen()
{
    ausProcessScreenViewBase::setupScreen();
}

void ausProcessScreenView::tearDownScreen()
{
    ausProcessScreenViewBase::tearDownScreen();
}

void ausProcessScreenView::selectTrigger(){
	presenter->selectTrigger();
}

void ausProcessScreenView::handleTickEvent(){
	if(isStart){
		tick++;
		if(tick == 1000){
			second--;
			touchgfx::Unicode::snprintf(countBuffer,COUNT_SIZE,"%i", second );
			count.invalidate();
			circleProgress1.setValue(second);
			circleProgress1.invalidate();
			tick=0;
			if(second == 0)
				second = 15;
		}
	}
}

void ausProcessScreenView::setState(uint8_t state){
	startImg.setVisible(false);
	recImg.setVisible(false);
	warnImg.setVisible(false);
	retakeImg.setVisible(false);
	resumeImg.setVisible(false);
	switch(state){
	case 0:
		isStart = false;
		startImg.setVisible(true);
		break;
	case 1:
		isStart = true;
		recImg.setVisible(true);
		break;
	case 2:
		isStart = false;
		warnImg.setVisible(true);
		retakeImg.setVisible(true);
		resumeImg.setVisible(true);
	default:
		isStart = false;
		break;
	}
	startImg.invalidate();
	recImg.invalidate();
	warnImg.invalidate();
	retakeImg.invalidate();
	resumeImg.invalidate();
}
