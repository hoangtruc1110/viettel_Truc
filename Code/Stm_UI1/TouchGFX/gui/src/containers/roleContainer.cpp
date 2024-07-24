#include <gui/containers/roleContainer.hpp>
#include <touchgfx/Color.hpp>
roleContainer::roleContainer()
{

}

void roleContainer::initialize()
{
    roleContainerBase::initialize();
}

void roleContainer::focus(bool isFocus){
	focusImg.setVisible(isFocus);
	focusImg.invalidate();
}
