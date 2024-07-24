#ifndef SETTINGITEMCONTAINER_HPP
#define SETTINGITEMCONTAINER_HPP

#include <gui_generated/containers/settingItemContainerBase.hpp>

class settingItemContainer : public settingItemContainerBase
{
public:
    settingItemContainer();
    virtual ~settingItemContainer() {}

    virtual void initialize();

    void focus(bool isFocus);
    void setText(const char* text);
    void setIcon(BitmapId imgID);
    void changeCurveBoxColor(colortype color);
protected:
};

#endif // SETTINGITEMCONTAINER_HPP
