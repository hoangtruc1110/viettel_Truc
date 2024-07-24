#ifndef ROLECONTAINER_HPP
#define ROLECONTAINER_HPP

#include <gui_generated/containers/roleContainerBase.hpp>

class roleContainer : public roleContainerBase
{
public:
    roleContainer();
    virtual ~roleContainer() {}

    virtual void initialize();
    void focus(bool isFocus);
protected:
};

#endif // ROLECONTAINER_HPP
