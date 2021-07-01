#include <gui/ledcontrol_screen/LedControlView.hpp>

LedControlView::LedControlView()
{

}

void LedControlView::setupScreen()
{
    LedControlViewBase::setupScreen();
}

void LedControlView::tearDownScreen()
{
    LedControlViewBase::tearDownScreen();
}

#ifndef SIMULATOR
#include "main.h"

void LedControlView::TouchGFXLed1Toggle()
{
	HAL_GPIO_TogglePin(LD6_GPIO_Port, LD6_Pin);
}

void LedControlView::TouchGFXLed2Toggle()
{
	HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
}

void LedControlView::OffAllLeds()
{
	HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_RESET);
}

void LedControlView::toggleButtonScr()
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
