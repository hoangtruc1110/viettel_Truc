#ifndef TEMPPROBESCREENVIEW_HPP
#define TEMPPROBESCREENVIEW_HPP

#include <gui_generated/tempprobescreen_screen/tempProbeScreenViewBase.hpp>
#include <gui/tempprobescreen_screen/tempProbeScreenPresenter.hpp>

class tempProbeScreenView : public tempProbeScreenViewBase
{
public:
    tempProbeScreenView();
    virtual ~tempProbeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setUartData(uint32_t uart_data);

//    // Khai báo buffer và kích thước
//    static const uint16_t TEMP_TEXT_SIZE = 10; // Kích thước buffer phù hợp
//    Unicode::UnicodeChar tempTextBuffer[TEMP_TEXT_SIZE];

    void updateResult(float valueF);
    void gotoNextScreen();

    virtual void uart_Data(char *data);
//    virtual void setUartData(uint32_t uart_data){};
protected:
};

#endif // TEMPPROBESCREENVIEW_HPP
