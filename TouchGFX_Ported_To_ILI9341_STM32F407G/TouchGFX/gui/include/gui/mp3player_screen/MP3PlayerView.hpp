#ifndef MP3PLAYERVIEW_HPP
#define MP3PLAYERVIEW_HPP

#include <gui_generated/mp3player_screen/MP3PlayerViewBase.hpp>
#include <gui/mp3player_screen/MP3PlayerPresenter.hpp>

class MP3PlayerView : public MP3PlayerViewBase
{
public:
    MP3PlayerView();
    virtual ~MP3PlayerView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MP3PLAYERVIEW_HPP
