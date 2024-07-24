#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}
    virtual void test(){}
    virtual void readBattery(){}
    virtual void readWiFiRSSI(){}

    virtual void setUartData(uint32_t uart_data) {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void uart_Data(char *data){}
    virtual void updateResult(float valueF){}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
