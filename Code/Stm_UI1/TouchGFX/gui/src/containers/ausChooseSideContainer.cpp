#include <gui/containers/ausChooseSideContainer.hpp>
#include <touchgfx/Color.hpp>
ausChooseSideContainer::ausChooseSideContainer()
{

}

void ausChooseSideContainer::initialize()
{
    ausChooseSideContainerBase::initialize();
}

void ausChooseSideContainer::changeCurveBoxColor(colortype color){
	circle1Painter.setColor(color);
	circle1_1Painter.setColor(color);
	circle1_2Painter.setColor(color);
	circle1_3Painter.setColor(color);
	box1.setColor(color);

	circle1.invalidate();
	circle1_1.invalidate();
	circle1_2.invalidate();
	circle1_3.invalidate();
	box1.invalidate();
}
