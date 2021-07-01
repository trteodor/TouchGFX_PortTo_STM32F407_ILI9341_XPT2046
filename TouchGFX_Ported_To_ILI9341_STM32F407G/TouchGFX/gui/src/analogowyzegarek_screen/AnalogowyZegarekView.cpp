#include <gui/analogowyzegarek_screen/AnalogowyZegarekView.hpp>

AnalogowyZegarekView::AnalogowyZegarekView()
{

}

void AnalogowyZegarekView::setupScreen()
{
    AnalogowyZegarekViewBase::setupScreen();
}

void AnalogowyZegarekView::tearDownScreen()
{
    AnalogowyZegarekViewBase::tearDownScreen();
}

	void AnalogowyZegarekView::handleTickEvent()
	{
		tickCounter++;
		if (tickCounter % 60 == 0)
		{
		if (++digitalSeconds >= 60)
		{
		 digitalSeconds = 0;

			if (++digitalMinutes >= 60)
			{
					digitalMinutes = 0;
					if (++digitalHours >= 24)
					{
						digitalHours = 0;
					}
			}
		}

		if (++analogSeconds >= 60)
		{

			analogSeconds = 0;
		if (++analogMinutes >= 60)
		{
		analogMinutes = 0;
			if (++analogHours >= 24)
			{
				analogHours = 0;
			}
		}

		}

		digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
		analogClock.setTime24Hour(analogHours, analogMinutes, analogSeconds);
		}
	}
