#include <gui/ausprocessdocscreen_screen/ausProcessDocScreenView.hpp>
#include <touchgfx/Color.hpp>

ausProcessDocScreenView::ausProcessDocScreenView():x_cur(0), x_max(1), y_cur(0), y_max(1)
{

}

void ausProcessDocScreenView::setupScreen()
{
    ausProcessDocScreenViewBase::setupScreen();
    updateFocus();
}

void ausProcessDocScreenView::tearDownScreen()
{
    ausProcessDocScreenViewBase::tearDownScreen();
}

void ausProcessDocScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void ausProcessDocScreenView::upTrigger(){
	presenter->upTrigger();
}
void ausProcessDocScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void ausProcessDocScreenView::downTrigger(){
	presenter->downTrigger();
}
void ausProcessDocScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void ausProcessDocScreenView::backTrigger(){}
void ausProcessDocScreenView::homeTrigger(){}


void ausProcessDocScreenView::unFocusAll(){
	circle1Painter.setColor(touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24));

	circle2Painter.setColor(touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24));

	circle3Painter.setColor(touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24));

	circle4Painter.setColor(touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24));

	circle1.invalidate();
	circle2.invalidate();
	circle3.invalidate();
	circle4.invalidate();

}
void ausProcessDocScreenView::updateFocus(){
	unFocusAll();
	if(x_cur == 0 && y_cur == 0){
		circle1Painter.setColor(touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43));
		circle1.invalidate();
	}else if(x_cur == 1 && y_cur == 0){
		circle2Painter.setColor(touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43));
		circle2.invalidate();
	}else if(x_cur == 0 && y_cur == 1){
		circle3Painter.setColor(touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43));
		circle3.invalidate();
	}else if(x_cur == 1 && y_cur == 1){
		circle4Painter.setColor(touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43));
		circle4.invalidate();
	}
}

void ausProcessDocScreenView::updateMark(){
	if(markDone[0] == 1){
		circle1_1.setVisible(true);
		line1.setVisible(true);
		line1_1.setVisible(true);
		textArea1.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 1;
		y_cur = 0;
	}else{
		circle1_1.setVisible(false);
		line1.setVisible(false);
		line1_1.setVisible(false);
		textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	circle1_1.invalidate();
	line1.invalidate();
	line1_1.invalidate();

	if(markDone[1] == 1){
		circle2_1.setVisible(true);
		line2.setVisible(true);
		line2_1.setVisible(true);
		textArea2.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 0;
		y_cur = 1;
	}else{
		circle2_1.setVisible(false);
		line2.setVisible(false);
		line2_1.setVisible(false);
		textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	circle2_1.invalidate();
	line2.invalidate();
	line2_1.invalidate();

	if(markDone[2] == 1){
		circle3_1.setVisible(true);
		line3.setVisible(true);
		line3_1.setVisible(true);
		textArea3.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 1;
		y_cur = 1;
	}else{
		circle3_1.setVisible(false);
		line3.setVisible(false);
		line3_1.setVisible(false);
		textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	circle3_1.invalidate();
	line3.invalidate();
	line3_1.invalidate();

	if(markDone[3] == 1){
		circle4_1.setVisible(true);
		line4.setVisible(true);
		line4_1.setVisible(true);
		textArea4.setColor(touchgfx::Color::getColorFromRGB(86, 174, 255));
		x_cur = 0;
		y_cur = 0;
	}else{
		circle4_1.setVisible(false);
		line4.setVisible(false);
		line4_1.setVisible(false);
		textArea4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
	}
	circle4_1.invalidate();
	line4.invalidate();
	line4_1.invalidate();
}
