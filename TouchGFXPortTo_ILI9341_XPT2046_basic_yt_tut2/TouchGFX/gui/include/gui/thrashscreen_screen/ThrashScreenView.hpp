#ifndef THRASHSCREENVIEW_HPP
#define THRASHSCREENVIEW_HPP

#include <gui_generated/thrashscreen_screen/ThrashScreenViewBase.hpp>
#include <gui/thrashscreen_screen/ThrashScreenPresenter.hpp>

class ThrashScreenView : public ThrashScreenViewBase
{
public:
    ThrashScreenView();
    virtual ~ThrashScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // THRASHSCREENVIEW_HPP
