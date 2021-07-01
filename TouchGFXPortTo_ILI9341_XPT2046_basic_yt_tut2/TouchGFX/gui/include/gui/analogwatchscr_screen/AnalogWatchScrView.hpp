#ifndef ANALOGWATCHSCRVIEW_HPP
#define ANALOGWATCHSCRVIEW_HPP

#include <gui_generated/analogwatchscr_screen/AnalogWatchScrViewBase.hpp>
#include <gui/analogwatchscr_screen/AnalogWatchScrPresenter.hpp>

class AnalogWatchScrView : public AnalogWatchScrViewBase
{
public:
    AnalogWatchScrView();
    virtual ~AnalogWatchScrView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ANALOGWATCHSCRVIEW_HPP
