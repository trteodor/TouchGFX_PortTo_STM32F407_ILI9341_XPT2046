/* Functions called by the TouchGFX HAL to invoke the actual data transfer to ILI9341.
 * Pero, 2021
 */

#include "../ILI9341/core.h"
#include "TouchGFX_DataTransfer.h"

extern void DisplayDriver_TransferCompleteCallback();
static uint8_t isTransmittingData = 0;


uint32_t touchgfxDisplayDriverTransmitActive(void)
{
	return isTransmittingData;
}

void touchgfxDisplayDriverTransmitBlock(uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h)
{
	isTransmittingData = 1;
	ILI9341_SetAddrWindow(x,y,w,h);   //here exist still probably small problem == 1pixel i dk else where exacly
	ILI9341_SendCommand(ILI9341_RAMWR);
	Send_DMA_Data16( (uint16_t *)pixels, (w*h)+1);
}

void DMA_SPI_TransmitCompleteILI9341()
{
		isTransmittingData = 0;
		DisplayDriver_TransferCompleteCallback();
}
