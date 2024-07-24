#ifndef STATUSBAR_HPP
#define STATUSBAR_HPP

#include <gui_generated/containers/StatusBarBase.hpp>

class StatusBar : public StatusBarBase
{
public:
    StatusBar();
    virtual ~StatusBar() {}

    virtual void initialize();
    void updateBatIcon(uint8_t value);
    void updateWiFiIcon(uint8_t value);
protected:
};

#endif // STATUSBAR_HPP
