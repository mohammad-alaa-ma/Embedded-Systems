#include <stdio.h>
#include <stdint.h>

#define __IO volatile
#define GPIO_B_Add 0x48000400 

#pragma pack(1)
struct SGPIO 
{
	__IO uint32_t MODER ;     // Mode register
	__IO uint32_t ODR ;       // Output data register
	__IO uint32_t ASCR ;      // Analog switch control register
	__IO uint32_t IDR ;       // Input data register
};


#define GPIOB ((struct SGPIO*) GPIO_B_Add)

//#define GPIOA ((GPIO_TypeDef *) 0x48000000)
//#define GPIOB ((GPIO_TypeDef *) 0x48000400)
//#define GPIOC ((GPIO_TypeDef *) 0x48000800)

void main ()
{
	//Method 5: use structures and pointers for all registers in a GPIO peripheral
	GPIOB->ODR |= (1UL << 16) ;

}