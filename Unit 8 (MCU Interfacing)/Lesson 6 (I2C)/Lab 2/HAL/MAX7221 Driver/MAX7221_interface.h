#ifndef MAX7221_INTERFACE_H_
#define MAX7221_INTERFACE_H_

/*********************************************** Includes **********************************************/
#include "../../LIB/Platform_Types.h"
#include "../../LIB/Utils.h"
#include "../../MCAL/SPI Driver/SPI_interface.h"



/*=======================================================================================
 * 						APIs supported by "HAL MAX7221 Driver"
 *=======================================================================================*/
void HAL_MAX7221_Init(void);
void HAL_MAX7221_DisplayDigit(uint8 digitPlace,uint8 digitValue);

#endif	/* MAX7221_INTERFACE_H_ */
