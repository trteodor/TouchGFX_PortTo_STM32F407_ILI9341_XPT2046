#ifndef ANALOGOWYZEGAREKVIEW_HPP
#define ANALOGOWYZEGAREKVIEW_HPP

#include <gui_generated/analogowyzegarek_screen/AnalogowyZegarekViewBase.hpp>
#include <gui/analogowyzegarek_screen/AnalogowyZegarekPresenter.hpp>

class AnalogowyZegarekView : public AnalogowyZegarekViewBase
{
public:
    AnalogowyZegarekView();
    virtual ~AnalogowyZegarekView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleTickEvent();


protected:

    int tickCounter;
    int analogHours;
    int analogMinutes;
    int analogSeconds;
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;

};

#endif // ANALOGOWYZEGAREKVIEW_HPP
