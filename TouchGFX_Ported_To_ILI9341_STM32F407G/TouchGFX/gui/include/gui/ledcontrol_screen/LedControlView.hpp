#ifndef LEDCONTROLVIEW_HPP
#define LEDCONTROLVIEW_HPP

#include <gui_generated/ledcontrol_screen/LedControlViewBase.hpp>
#include <gui/ledcontrol_screen/LedControlPresenter.hpp>

class LedControlView : public LedControlViewBase
{
public:
    LedControlView();
    virtual ~LedControlView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
#ifndef SIMULATOR
    virtual void TouchGFXLed1Toggle();
    virtual void TouchGFXLed2Toggle();
    virtual void OffAllLeds();
    virtual void toggleButtonScr();
#endif /*SIMULATOR*/
protected:
};

#endif // LEDCONTROLVIEW_HPP
