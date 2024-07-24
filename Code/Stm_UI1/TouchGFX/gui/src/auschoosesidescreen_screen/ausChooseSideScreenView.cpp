#include <gui/auschoosesidescreen_screen/ausChooseSideScreenView.hpp>
#include <touchgfx/Color.hpp>

ausChooseSideScreenView::ausChooseSideScreenView(): x_cur(0), x_max(1)
{

}

void ausChooseSideScreenView::setupScreen()
{
    ausChooseSideScreenViewBase::setupScreen();
    chooseLeftSide(true);
}

void ausChooseSideScreenView::tearDownScreen()
{
    ausChooseSideScreenViewBase::tearDownScreen();
}

void ausChooseSideScreenView::rightTrigger(){
	presenter->rightTrigger();
}
void ausChooseSideScreenView::leftTrigger(){
	presenter->leftTrigger();
}
void ausChooseSideScreenView::selectTrigger(){
	presenter->selectTrigger();
}
void ausChooseSideScreenView::homeTrigger(){
	presenter->homeTrigger();
}
void ausChooseSideScreenView::backTrigger(){
	presenter->backTrigger();
}

void ausChooseSideScreenView::chooseLeftSide(bool isChoose){
	colortype color = isChoose?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24);
	leftContainer.changeCurveBoxColor(color);
	focusLeft.setVisible(isChoose);
	leftContainer.invalidate();
	focusLeft.invalidate();
}
void ausChooseSideScreenView::chooseRightSide(bool isChoose){
	colortype color = isChoose?touchgfx::Color::getColorFromRGB(0x17, 0x2F, 0x43):touchgfx::Color::getColorFromRGB(0x11, 0x1B, 0x24);
	rightContainer.changeCurveBoxColor(color);
	focusRight.setVisible(isChoose);
	rightContainer.invalidate();
	focusRight.invalidate();
}

void ausChooseSideScreenView::gotoNextScreen(){
	application().gotoverifyScreenScreenNoTransition();
}
