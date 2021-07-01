#ifndef THRASHSCREENPRESENTER_HPP
#define THRASHSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ThrashScreenView;

class ThrashScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ThrashScreenPresenter(ThrashScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ThrashScreenPresenter() {};

private:
    ThrashScreenPresenter();

    ThrashScreenView& view;
};

#endif // THRASHSCREENPRESENTER_HPP
