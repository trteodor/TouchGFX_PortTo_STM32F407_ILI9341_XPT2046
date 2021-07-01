#include <gui/bmp280_screen/BMP280View.hpp>
#include <gui/bmp280_screen/BMP280Presenter.hpp>

BMP280Presenter::BMP280Presenter(BMP280View& v)
    : view(v)
{

}

void BMP280Presenter::activate()
{
	model->setScanJunctionTemp(true);
}

void BMP280Presenter::deactivate()
{

}

void BMP280Presenter::newJunctionTempValue(int value)
{
view.setJunctionTempValue(value);
}
