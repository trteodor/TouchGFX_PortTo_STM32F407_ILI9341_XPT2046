#ifndef APK2PRESENTER_HPP
#define APK2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Apk2View;

class Apk2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Apk2Presenter(Apk2View& v);

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

    virtual ~Apk2Presenter() {};

private:
    Apk2Presenter();

    Apk2View& view;
};

#endif // APK2PRESENTER_HPP
