#ifndef EXAMINATIONCONTAINER_HPP
#define EXAMINATIONCONTAINER_HPP

#include <gui_generated/containers/examinationContainerBase.hpp>

class examinationContainer : public examinationContainerBase
{
public:
    examinationContainer();
    virtual ~examinationContainer() {}

    virtual void initialize();
    void unfocus();
    void focus();
    void check();
    void uncheck();
protected:
};

#endif // EXAMINATIONCONTAINER_HPP
