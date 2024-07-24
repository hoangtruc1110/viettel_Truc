#ifndef TEMPPROCESS_HPP
#define TEMPPROCESS_HPP

#include <gui_generated/containers/tempProcessBase.hpp>

class tempProcess : public tempProcessBase
{
public:
    tempProcess();
    virtual ~tempProcess() {}

    virtual void initialize();
    void setProcessNumber(uint8_t value);
    void setDoneProcess();
    void setChoosenProcess(uint8_t value);
protected:
};

#endif // TEMPPROCESS_HPP
