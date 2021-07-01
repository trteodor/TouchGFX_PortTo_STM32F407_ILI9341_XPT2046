/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mp3player_screen/MP3PlayerViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

MP3PlayerViewBase::MP3PlayerViewBase() :
    buttonCallback(this, &MP3PlayerViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 320, 240);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(154, 212, 194));

    FutureOption.setXY(2, 93);
    FutureOption.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    FutureOption.setLinespacing(0);
    FutureOption.setTypedText(touchgfx::TypedText(T_SINGLEUSEID10));

    button1.setXY(256, 0);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_MENUSCALED_ID), touchgfx::Bitmap(BITMAP_MENUSCALEDWHITE_ID));
    button1.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(FutureOption);
    add(button1);
}

void MP3PlayerViewBase::setupScreen()
{

}

void MP3PlayerViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to MainScreen
        //Go to MainScreen with no screen transition
        application().gotoMainScreenScreenNoTransition();
    }
}
