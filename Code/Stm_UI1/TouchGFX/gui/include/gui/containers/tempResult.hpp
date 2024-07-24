#ifndef TEMPRESULT_HPP
#define TEMPRESULT_HPP

#include <gui_generated/containers/tempResultBase.hpp>

class tempResult : public tempResultBase
{
public:
    tempResult();
    virtual ~tempResult() {}

    virtual void initialize();
    void updateResult(float valueF);
protected:
};

#endif // TEMPRESULT_HPP
