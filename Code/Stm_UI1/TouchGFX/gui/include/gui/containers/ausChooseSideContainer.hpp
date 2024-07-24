#ifndef AUSCHOOSESIDECONTAINER_HPP
#define AUSCHOOSESIDECONTAINER_HPP

#include <gui_generated/containers/ausChooseSideContainerBase.hpp>
//#include <touchgfx/hal/Types.hpp>

class ausChooseSideContainer : public ausChooseSideContainerBase
{
public:
    ausChooseSideContainer();
    virtual ~ausChooseSideContainer() {}

    virtual void initialize();
    void changeCurveBoxColor(colortype color);
protected:
};

#endif // AUSCHOOSESIDECONTAINER_HPP
