#include <stdio.h>
#include <stdint.h>

//just for testing in C on the host machine
uint32_t G_GPIO_ODR_variable = 0;
#define GPIO_ODR &G_GPIO_ODR_variable


//ODR absolute adress = GPIO_Base_address + ODR_offset = 0x48000400 + 0x4 = 0x48000404
//#define GPIO_ODR 0x48000404

void main()
{
    //Method 1: Using numeric memory address directly
    *((volatile uint32_t *)GPIO_ODR) |= 1UL<<16;

    printf("G_GPIO_ODR_variable = 0x%x",G_GPIO_ODR_variable);

}

/*
This is the same as the previous one but in several lines
volatile uint32_t* ptr;
ptr = (volatile uint32_t*)0x48000404;
//Typecasting in this context is telling the compiler to interpret a particular value as a memory address. When you write:
*ptr = 1UL<<16;
*/

/*
    #define GPIO_ODR 0x48000404
          //Method 1: Using numeric memory address directly
    *((volatile uint32_t *)GPIO_ODR) |= 1UL<<16;
*/


/*
    #define address 0x48000404
    #define GPIO_ODR ((volatile uint32_t *)address) 
          //Method 2: Casting an address to a pointer
    *GPIO_ODR |= 1UL<<16;
*/

/*
    #define address 0x48000404
    #define GPIO_ODR *((volatile uint32_t *)address) 
          //Method 3: Casting to a pointer and then dereferencing it
    GPIO_ODR |= 1UL<<16;
*/