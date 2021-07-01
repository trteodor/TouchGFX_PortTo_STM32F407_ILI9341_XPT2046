#ifndef TEMPSCRPRESENTER_HPP
#define TEMPSCRPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TempScrView;

class TempScrPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TempScrPresenter(TempScrView& v);

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

    virtual ~TempScrPresenter() {};

private:
    TempScrPresenter();

    TempScrView& view;
};

#endif // TEMPSCRPRESENTER_HPP
