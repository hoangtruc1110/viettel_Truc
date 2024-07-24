#ifndef BLUERECCONTAINER_HPP
#define BLUERECCONTAINER_HPP

#include <gui_generated/containers/blueRecContainerBase.hpp>

class blueRecContainer : public blueRecContainerBase
{
public:
    blueRecContainer();
    virtual ~blueRecContainer() {}

    virtual void initialize();
protected:
};

#endif // BLUERECCONTAINER_HPP
