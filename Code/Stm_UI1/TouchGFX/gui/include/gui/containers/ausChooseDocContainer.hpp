#ifndef AUSCHOOSEDOCCONTAINER_HPP
#define AUSCHOOSEDOCCONTAINER_HPP

#include <gui_generated/containers/ausChooseDocContainerBase.hpp>

class ausChooseDocContainer : public ausChooseDocContainerBase
{
public:
    ausChooseDocContainer();
    virtual ~ausChooseDocContainer() {}

    virtual void initialize();
    void focus(bool isFocus);
    void markDone(bool isDone);
    void changeCurveBoxColor(colortype color);
    void setText(const char* text);
protected:
};

#endif // AUSCHOOSEDOCCONTAINER_HPP
