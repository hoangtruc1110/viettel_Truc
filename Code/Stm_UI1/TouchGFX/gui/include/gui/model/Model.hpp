#ifndef MODEL_HPP
#define MODEL_HPP
#include <cstdint>
class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
//    void readBattery();
//    void readWiFiRSSI();
    void setUartData(uint32_t uart_data);
    void setExamState(uint8_t examNum, uint8_t isDone);
    void setVerifyText(char* text);
    char verifyScreenText[115];
    uint8_t examState[4]={0,0,0,0};
    bool isDoctor = true;
    uint8_t examCurrent[4]={0,0,0,0};

    uint8_t examFlow[3]={0,0,0};

    virtual void uart_Data(char *data){}

protected:
    ModelListener* modelListener;
    uint16_t uart_data;
    char RData[257];
};

#endif // MODEL_HPP
