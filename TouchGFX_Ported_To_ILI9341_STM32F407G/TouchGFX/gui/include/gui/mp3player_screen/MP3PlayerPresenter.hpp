#ifndef MP3PLAYERPRESENTER_HPP
#define MP3PLAYERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MP3PlayerView;

class MP3PlayerPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MP3PlayerPresenter(MP3PlayerView& v);

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

    virtual ~MP3PlayerPresenter() {};

private:
    MP3PlayerPresenter();

    MP3PlayerView& view;
};

#endif // MP3PLAYERPRESENTER_HPP
