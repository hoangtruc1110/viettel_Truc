#include <gui/containers/examinationContainer.hpp>

examinationContainer::examinationContainer()
{

}

void examinationContainer::initialize()
{
    examinationContainerBase::initialize();
}

void examinationContainer::focus(){
	normal.setVisible(false);
	choosen.setVisible(true);
	choosenBorder.setVisible(true);
	normal.invalidate();
	choosen.invalidate();
	choosenBorder.invalidate();
}
void examinationContainer::unfocus(){
	normal.setVisible(true);
	choosen.setVisible(false);
	choosenBorder.setVisible(false);
	normal.invalidate();
	choosen.invalidate();
	choosenBorder.invalidate();
}

void examinationContainer::check(){
	tick.setVisible(true);
	tick.invalidate();
}
void examinationContainer::uncheck(){
	tick.setVisible(false);
	tick.invalidate();
}
