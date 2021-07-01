#ifndef MP3SCRVIEW_HPP
#define MP3SCRVIEW_HPP

#include <gui_generated/mp3scr_screen/Mp3ScrViewBase.hpp>
#include <gui/mp3scr_screen/Mp3ScrPresenter.hpp>

class Mp3ScrView : public Mp3ScrViewBase
{
public:
    Mp3ScrView();
    virtual ~Mp3ScrView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MP3SCRVIEW_HPP
