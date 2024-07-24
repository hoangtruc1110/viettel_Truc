#include <gui/setupwifiscreen_screen/setUpWiFiScreenView.hpp>

setUpWiFiScreenView::setUpWiFiScreenView()
{

}

void setUpWiFiScreenView::setupScreen()
{
    setUpWiFiScreenViewBase::setupScreen();
}

void setUpWiFiScreenView::tearDownScreen()
{
    setUpWiFiScreenViewBase::tearDownScreen();
}

void setUpWiFiScreenView::changeQRCode(){
	qrCode.convertStringToQRCode("WIFI:T:WPA;S:KimLoan;P:08052005;H:;;");
	qrCode.invalidate();
}


