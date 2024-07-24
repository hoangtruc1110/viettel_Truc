#ifndef AUSCHOOSENIPLECONTAINER_HPP
#define AUSCHOOSENIPLECONTAINER_HPP

#include <gui_generated/containers/ausChooseNipleContainerBase.hpp>

class ausChooseNipleContainer : public ausChooseNipleContainerBase
{
public:
    ausChooseNipleContainer();
    virtual ~ausChooseNipleContainer() {}

    virtual void initialize();
    void changeCurveBoxColor(colortype color);
    void markDone(bool isDone);
    void focus(bool isFocus);
    void setText(const char* text);
protected:
};

#endif // AUSCHOOSENIPLECONTAINER_HPP
