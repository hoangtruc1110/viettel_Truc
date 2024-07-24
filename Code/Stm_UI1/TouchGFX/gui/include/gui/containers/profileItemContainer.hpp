#ifndef PROFILEITEMCONTAINER_HPP
#define PROFILEITEMCONTAINER_HPP

#include <gui_generated/containers/profileItemContainerBase.hpp>

class profileItemContainer : public profileItemContainerBase
{
public:
    profileItemContainer();
    virtual ~profileItemContainer() {}

    virtual void initialize();
    void focus(bool isFocus);
    void changeCurveBoxColor(colortype color);
    void setText(const char* text);
protected:
};

#endif // PROFILEITEMCONTAINER_HPP
