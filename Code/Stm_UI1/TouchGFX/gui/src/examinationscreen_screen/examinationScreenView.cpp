#include <gui/examinationscreen_screen/examinationScreenView.hpp>
#include <touchgfx/Color.hpp>


examinationScreenView::examinationScreenView()
{

}

void examinationScreenView::setupScreen()
{
    examinationScreenViewBase::setupScreen();
    for (int i = 0; i < 4; i++) {
    	markExam[i] = presenter->getExamState()[i];
    }
    updateMarkExam();
    updateFocus();
}

void examinationScreenView::tearDownScreen()
{
    examinationScreenViewBase::tearDownScreen();
}

void examinationScreenView::upTrigger()
{
	presenter->upTrigger();
}

void examinationScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void examinationScreenView::downTrigger(){
	presenter->downTrigger();
}
void examinationScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void examinationScreenView::selectTrigger(){
	presenter->selectTrigger();
//	updateMarkExam();
}

void examinationScreenView::unFocusAll(){
	boxProfile.setVisible(false);
	boxProfile.invalidate();
	containerTemp.unfocus();
	containerSP02.unfocus();
	containerAus.unfocus();
	containerEcg.unfocus();
}

void examinationScreenView::updateFocus(){
	unFocusAll();
	if(x_cur == 0 && y_cur == 0){
		boxProfile.setVisible(true);
		boxProfile.invalidate();
	}else if (x_cur == 0 && y_cur == 1){
		containerTemp.focus();
	}else if (x_cur == 1 && y_cur == 1){
		containerSP02.focus();
	}else if (x_cur == 0 && y_cur == 2){
		containerAus.focus();
	}else if (x_cur == 1 && y_cur == 2){
		containerEcg.focus();
	}
}
void examinationScreenView::updateMarkExam(){
	if(markExam[0] == 1){
		tempIcon.setVisible(false);
		tempTickIcon.setVisible(true);
		containerTemp.check();
		tempText.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 1;
		y_cur = 1;
	}else{
		tempIcon.setVisible(true);
		tempTickIcon.setVisible(false);
		containerTemp.uncheck();
		tempText.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	tempIcon.invalidate();
	tempTickIcon.invalidate();
	tempText.invalidate();

	if(markExam[1] == 1){
		spo2Icon.setVisible(false);
		spo2TickIcon.setVisible(true);
		containerSP02.check();
		spo2Text.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 0;
		y_cur = 2;
	}else{
		spo2Icon.setVisible(true);
		spo2TickIcon.setVisible(false);
		containerSP02.uncheck();
		spo2Text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	spo2Icon.invalidate();
	spo2TickIcon.invalidate();
	spo2Text.invalidate();

	if(markExam[2] == 1){
		ausIcon.setVisible(false);
		ausTickIcon.setVisible(true);
		containerAus.check();
		auscultationText.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 1;
		y_cur = 2;
	}else{
		ausIcon.setVisible(true);
		ausTickIcon.setVisible(false);
		containerAus.uncheck();
		auscultationText.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	ausIcon.invalidate();
	ausTickIcon.invalidate();
	auscultationText.invalidate();

	if(markExam[3] == 1){
		ecgIcon.setVisible(false);
		ecgTickIcon.setVisible(true);
		containerEcg.check();
		ecgText.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 0;
		y_cur = 1;
	}else{
		ecgIcon.setVisible(true);
		ecgTickIcon.setVisible(false);
		containerEcg.uncheck();
		ecgText.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	ecgIcon.invalidate();
	ecgTickIcon.invalidate();
	ecgText.invalidate();
}

void examinationScreenView::gotoNextScreen(uint8_t id){
	switch(id){
	case 0:
		application().gotohomeScreenScreenNoTransition();
		break;
	case 1:
		application().gotoverifyScreenScreenNoTransition();
		break;
	case 3:
		application().gotoausChooseSideScreenScreenNoTransition();
		break;
	case 4:
		application().gotoausChooseDocScreenScreenNoTransition();
		break;
	default:
		break;
	}
}


void examinationScreenView::updateWiFiIcon(uint8_t value){
	statusBar1.updateWiFiIcon(value);
}
void examinationScreenView::updateBatIcon(uint8_t value){
	statusBar1.updateBatIcon(value);
}
