#ifndef DISPLAYCONTAINER_HPP
#define DISPLAYCONTAINER_HPP

#include <gui_generated/containers/displayContainerBase.hpp>

class displayContainer : public displayContainerBase
{
public:
    displayContainer();
    virtual ~displayContainer() {}

    virtual void initialize();
    void setValue(uint16_t value, bool isTime);
    void focus(bool isFocus);
protected:
};

#endif // DISPLAYCONTAINER_HPP
