#include <gui/ledscr_screen/LedScrView.hpp>

LedScrView::LedScrView()
{

}

void LedScrView::setupScreen()
{
    LedScrViewBase::setupScreen();
}

void LedScrView::tearDownScreen()
{
    LedScrViewBase::tearDownScreen();
}

#ifndef SIMULATOR
#include "main.h"

void LedScrView::Led1bToggle()
{
	HAL_GPIO_TogglePin(LD6_GPIO_Port, LD6_Pin);
}

void LedScrView::Led2bToggle()
{
	HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
}

void LedScrView::toggleButtonScr()
{
if (dontpressed.isVisible())
{
dontpressed.setVisible(false);
Pressed.setVisible(true);
}
else
{
	dontpressed.setVisible(true);
	Pressed.setVisible(false);
}
dontpressed.invalidate();
Pressed.invalidate();
}


//  LEDToggle1.setBitmaps(touchgfx::Bitmap(BITMAP_LEDOFF_SCALED_ID),
			//touchgfx::Bitmap(BITMAP_LEDON_SCLAED_ID));
/* to mozna byloby np dodac ze po wlaczeniu ekranu zapalam diody ktore
 * sie swieca wowczas bym ich nie musial gasic oj nie wazne :D
 * no proste -- wiec po co to robic XD
 *
 */

#endif /*SIMULATOR*/

