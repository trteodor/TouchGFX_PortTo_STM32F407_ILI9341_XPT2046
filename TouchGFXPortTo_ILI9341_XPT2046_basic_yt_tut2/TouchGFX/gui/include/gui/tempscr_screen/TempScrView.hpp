#ifndef TEMPSCRVIEW_HPP
#define TEMPSCRVIEW_HPP

#include <gui_generated/tempscr_screen/TempScrViewBase.hpp>
#include <gui/tempscr_screen/TempScrPresenter.hpp>

class TempScrView : public TempScrViewBase
{
public:
    TempScrView();
    virtual ~TempScrView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPSCRVIEW_HPP
