#ifndef MYBUTTONCONTROLLER_H
#define MYBUTTONCONTROLLER_H

#include <platform/driver/button/ButtonController.hpp>

class MyButtonController : public touchgfx::ButtonController
{
	virtual void init();
	virtual bool sample(uint8_t&key);

private:
	uint8_t previousState;
};

#endif
