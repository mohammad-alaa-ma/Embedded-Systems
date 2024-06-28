#include <stdio.h>
#include <stdint.h>


#define G_GPIO_ODR_Add 0x48000014  // Base address + offset for GPIOA ODR

#pragma pack(1)
struct SGPIO_ODR_t
{
	uint32_t pin0 :1;
	uint32_t pin1 :1;
	uint32_t pin2 :1;
	uint32_t pin3 :1;
	uint32_t pin4 :1;
	uint32_t pin5 :1;
	uint32_t pin6 :1;
	uint32_t pin7 :1;
	uint32_t pin8 :1;
	uint32_t pin9 :1;
	uint32_t pin10 :1;
	uint32_t pin11 :1;
	uint32_t pin12 :1;
	uint32_t pin13 :1;
	uint32_t pin14 :1;
	uint32_t pin15 :1;
	uint32_t pin16 :1;
	uint32_t pin17 :1;
	uint32_t pin18 :1;
	uint32_t pin19 :1;
	uint32_t pin20 :1;
	uint32_t pin21 :1;
	uint32_t pin22 :1;
	uint32_t pin23 :1;
	uint32_t pin24 :1;
	uint32_t pin25 :1;
	uint32_t pin26 :1;
	uint32_t pin27 :1;
	uint32_t pin28 :1;
	uint32_t pin29 :1;
	uint32_t pin30 :1;
	uint32_t pin31 :1;
};

union U_odr
{
	struct SGPIO_ODR_t  S_ODR;
	uint32_t ODR;
};

volatile union U_odr* GPIO_ODR_R = (union U_odr*) G_GPIO_ODR_Add;


void main ()
{

// Method 4: Use sturcture, union and pointer for one register
    GPIO_ODR_R->S_ODR.pin16 = 1;


}