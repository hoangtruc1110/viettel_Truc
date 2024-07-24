#ifndef SETTINGWIFICONTAINER_HPP
#define SETTINGWIFICONTAINER_HPP

#include <gui_generated/containers/settingWifiContainerBase.hpp>

class settingWifiContainer : public settingWifiContainerBase
{
public:
    settingWifiContainer();
    virtual ~settingWifiContainer() {}

    virtual void initialize();
    void focus(bool isFocus);
    void setText(const char* text);
    void changeCurveBoxColor(colortype color);
protected:
};

#endif // SETTINGWIFICONTAINER_HPP
