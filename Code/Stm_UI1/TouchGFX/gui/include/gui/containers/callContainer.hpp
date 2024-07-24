#ifndef CALLCONTAINER_HPP
#define CALLCONTAINER_HPP

#include <gui_generated/containers/callContainerBase.hpp>

class callContainer : public callContainerBase
{
public:
    callContainer();
    virtual ~callContainer() {}

    virtual void initialize();
protected:
};

#endif // CALLCONTAINER_HPP
