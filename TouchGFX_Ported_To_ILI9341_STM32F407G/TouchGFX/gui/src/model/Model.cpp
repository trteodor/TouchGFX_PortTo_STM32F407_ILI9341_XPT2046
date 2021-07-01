#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{
		tickCounter=0;
	scanJunctionTemp=false;
}

#ifndef SIMULATOR

#include "main.h"
#include "BMPXX80.h"

float temperature;
int32_t  pressure;


extern "C" {
extern void TOGGLE_LED1(void);
extern uint32_t userButtonPressed;
}
#endif /*SIMULATOR*/


void Model::tick()
{

#ifndef SIMULATOR

if (userButtonPressed == 1)
{
userButtonPressed = 0;
modelListener->userButtonClicked();
}
#endif /*SIMULATOR*/

tickCounter++;
	if (((tickCounter % 20) == 0) && (scanJunctionTemp))
	{
		if (modelListener != 0)
		{
			modelListener->newJunctionTempValue(getTempValue());
		}

}



}
void Model::setScanJunctionTemp(bool scanEnabled)
{
	scanJunctionTemp = scanEnabled;
}

int Model::getTempValue() {
#ifndef SIMULATOR
//	return TEMP_SENSOR_GetValue();
	 BMP280_ReadTemperatureAndPressure(&temperature, &pressure);
	 return temperature;
#else

return 25;

#endif
}


