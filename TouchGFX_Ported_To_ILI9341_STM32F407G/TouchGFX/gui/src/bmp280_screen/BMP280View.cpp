#include <gui/bmp280_screen/BMP280View.hpp>

BMP280View::BMP280View()
{
	lastTempValue=0;
}

void BMP280View::setupScreen()
{
    BMP280ViewBase::setupScreen();
}

void BMP280View::tearDownScreen()
{
    BMP280ViewBase::tearDownScreen();
}

void BMP280View::setJunctionTempValue(int value)
{
	if (lastTempValue != value)
	{
		lastTempValue = value;
		temperatureBar.setValue(value);
		temperatureBar.invalidate();
	}
}
