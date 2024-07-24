#ifndef PROFILEOTHERCONTAINER_HPP
#define PROFILEOTHERCONTAINER_HPP

#include <gui_generated/containers/profileOtherContainerBase.hpp>

class profileOtherContainer : public profileOtherContainerBase
{
public:
    profileOtherContainer();
    virtual ~profileOtherContainer() {}

    virtual void initialize();
    void focus(bool isFocus);
	void changeCurveBoxColor(colortype color);
protected:
};

#endif // PROFILEOTHERCONTAINER_HPP
