#ifndef LEDSCRVIEW_HPP
#define LEDSCRVIEW_HPP

#include <gui_generated/ledscr_screen/LedScrViewBase.hpp>
#include <gui/ledscr_screen/LedScrPresenter.hpp>

class LedScrView : public LedScrViewBase
{
public:
    LedScrView();
    virtual ~LedScrView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

#ifndef SIMULATOR
    virtual void Led1bToggle();
    virtual void Led2bToggle();
    virtual void toggleButtonScr();
#endif /*SIMULATOR*/


protected:
};

#endif // LEDSCRVIEW_HPP
