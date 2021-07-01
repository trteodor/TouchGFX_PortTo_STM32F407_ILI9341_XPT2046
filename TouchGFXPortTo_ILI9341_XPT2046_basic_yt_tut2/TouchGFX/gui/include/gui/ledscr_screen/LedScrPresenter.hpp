#ifndef LEDSCRPRESENTER_HPP
#define LEDSCRPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class LedScrView;

class LedScrPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    LedScrPresenter(LedScrView& v);

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

    virtual ~LedScrPresenter() {};

    void  userButtonClicked();

private:
    LedScrPresenter();

    LedScrView& view;
};

#endif // LEDSCRPRESENTER_HPP
