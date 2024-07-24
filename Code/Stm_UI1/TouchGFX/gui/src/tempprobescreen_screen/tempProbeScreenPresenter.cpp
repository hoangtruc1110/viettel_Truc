#include <gui/tempprobescreen_screen/tempProbeScreenView.hpp>
#include <gui/tempprobescreen_screen/tempProbeScreenPresenter.hpp>

tempProbeScreenPresenter::tempProbeScreenPresenter(tempProbeScreenView& v)
    : view(v)
{

}

void tempProbeScreenPresenter::activate()
{

}

void tempProbeScreenPresenter::deactivate()
{

}


void tempProbeScreenPresenter::setUartData(uint32_t uart_data)
{
	view.setUartData(uart_data);
}

void tempProbeScreenPresenter::updateResult(float valueF){
	view.updateResult(valueF);
}

void tempProbeScreenPresenter::uart_Data(char *data)
{
	view.uart_Data(data);
}
