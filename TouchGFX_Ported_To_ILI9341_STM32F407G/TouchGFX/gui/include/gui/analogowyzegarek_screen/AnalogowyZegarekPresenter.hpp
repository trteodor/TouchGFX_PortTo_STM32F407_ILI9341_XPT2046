#ifndef ANALOGOWYZEGAREKPRESENTER_HPP
#define ANALOGOWYZEGAREKPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class AnalogowyZegarekView;

class AnalogowyZegarekPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    AnalogowyZegarekPresenter(AnalogowyZegarekView& v);

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

    virtual ~AnalogowyZegarekPresenter() {};

private:
    AnalogowyZegarekPresenter();

    AnalogowyZegarekView& view;
};

#endif // ANALOGOWYZEGAREKPRESENTER_HPP
