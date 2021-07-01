#ifndef BMP280VIEW_HPP
#define BMP280VIEW_HPP

#include <gui_generated/bmp280_screen/BMP280ViewBase.hpp>
#include <gui/bmp280_screen/BMP280Presenter.hpp>

class BMP280View : public BMP280ViewBase
{
public:
    BMP280View();
    virtual ~BMP280View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void setJunctionTempValue(int value);

    int lastTempValue;

protected:
};

#endif // BMP280VIEW_HPP
