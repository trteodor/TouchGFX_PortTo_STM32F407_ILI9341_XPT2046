/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/analogowyzegarek_screen/AnalogowyZegarekViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

AnalogowyZegarekViewBase::AnalogowyZegarekViewBase() :
    buttonCallback(this, &AnalogowyZegarekViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 320, 240);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(106, 189, 109));

    analogClock.setXY(-12, -10);
    analogClock.setBackground(BITMAP_BLUE_CLOCKS_BACKGROUNDS_CLOCK_STANDARD_BACKGROUND_ID, 116, 116);
    analogClock.setupSecondHand(BITMAP_BLUE_CLOCKS_HANDS_CLOCK_STANDARD_SECOND_HAND_ID, 3, 66);
    analogClock.setupMinuteHand(BITMAP_BLUE_CLOCKS_HANDS_CLOCK_STANDARD_MINUTE_HAND_ID, 7, 67);
    analogClock.setMinuteHandSecondCorrection(false);
    analogClock.setupHourHand(BITMAP_BLUE_CLOCKS_HANDS_CLOCK_STANDARD_HOUR_HAND_ID, 7, 52);
    analogClock.setHourHandMinuteCorrection(false);
    analogClock.initializeTime24Hour(10, 10, 0);

    digitalClock.setPosition(132, 196, 320, 54);
    digitalClock.setColor(touchgfx::Color::getColorFrom24BitRGB(245, 0, 0));
    digitalClock.setTypedText(touchgfx::TypedText(T_SINGLEUSEID11));
    digitalClock.displayLeadingZeroForHourIndicator(true);
    digitalClock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock.setTime24Hour(10, 10, 0);

    MainMenuBuuton.setXY(256, 0);
    MainMenuBuuton.setBitmaps(touchgfx::Bitmap(BITMAP_MENUSCALEDWHITE_ID), touchgfx::Bitmap(BITMAP_MENUSCALED_ID));
    MainMenuBuuton.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(analogClock);
    add(digitalClock);
    add(MainMenuBuuton);
}

void AnalogowyZegarekViewBase::setupScreen()
{

}

void AnalogowyZegarekViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &MainMenuBuuton)
    {
        //Interaction1
        //When MainMenuBuuton clicked change screen to MainScreen
        //Go to MainScreen with no screen transition
        application().gotoMainScreenScreenNoTransition();
    }
}