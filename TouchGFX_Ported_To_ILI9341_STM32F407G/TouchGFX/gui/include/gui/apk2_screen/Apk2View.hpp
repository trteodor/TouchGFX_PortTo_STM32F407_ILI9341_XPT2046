#ifndef APK2VIEW_HPP
#define APK2VIEW_HPP

#include <gui_generated/apk2_screen/Apk2ViewBase.hpp>
#include <gui/apk2_screen/Apk2Presenter.hpp>

class Apk2View : public Apk2ViewBase
{
public:
    Apk2View();
    virtual ~Apk2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // APK2VIEW_HPP
