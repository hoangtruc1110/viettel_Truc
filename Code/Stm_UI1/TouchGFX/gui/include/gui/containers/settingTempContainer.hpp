#ifndef SETTINGTEMPCONTAINER_HPP
#define SETTINGTEMPCONTAINER_HPP

#include <gui_generated/containers/settingTempContainerBase.hpp>

class settingTempContainer : public settingTempContainerBase
{
public:
    settingTempContainer();
    virtual ~settingTempContainer() {}

    virtual void initialize();
    void focus(bool isFocus);
    void setTagName(const char* name);
protected:
};

#endif // SETTINGTEMPCONTAINER_HPP
