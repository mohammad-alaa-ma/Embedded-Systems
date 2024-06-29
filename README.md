# Embedded Systems Course

This repository contains tasks and drivers of various units of an Embedded Systems course.

## Units Overview

### Unit 2: C Programming
This unit tasks covers the basics of C programming, which is fundamental for developing embedded systems.

- **Topics Covered:**
  - C Syntax and Semantics
  - Data Types and Variables
  - Control Structures (if-else, loops)
  - Functions and Recursion
  - Pointers and Memory Management
  - Structures and Unions
  - File I/O


### Unit 3: Embedded C
Embedded C extends standard C to include features necessary for embedded systems programming. This unit includes code examples related to:

- **Topics Covered:**
  - Introduction to Embedded C
  - Differences between C and Embedded C
  - Programming Embedded Systems in C
  - Using Hardware-Specific Libraries
  - Writing and Optimizing Code for Embedded Systems
  - Startup Codes
  - Linker Scripts
  - Header Files (.h)
  - Makefile for Building Projects
    
**Examples:**
  - `app.c`, `uart.c`, `uart.h`
  - Object files: `app.o`, `uart.o`, `startup.o`
  - Startup file: `startup.s`
  - Linker script: `linker_script.ld`
  - Executable: `learn-in-depth.elf`
  - Binary: `learn-in-depth.bin`
  - Simulated on QEMU, Proteus, and debugged on Keil MicroVision

  
### Unit 4: Data Structures for Embedded Systems
This unit focuses on data structures tailored for efficient use in embedded systems.

- **Topics Covered:**
  - Arrays, Linked Lists, and Dynamic Memory
  - Stacks and Queues


### Unit 6: MCU Fundamentals
Microcontroller Unit (MCU) fundamentals are essential for understanding embedded system hardware.

- **Topics Covered:**
  - Introduction to Microcontrollers
  - Architecture of Microcontrollers
  - Programming MCU Memory Map
  - Programming MCU Clocks
  - Programming MCU Interrupts


### Unit 7: MCU Essential Peripherals
This unit covers writing complete drivers to GPIO and EXTI.

- **Topics Covered:**
  - Programming GPIO (General Purpose Input/Output)
  - Programming EXTI

 
### Unit 8: MCU Interfacing
This unit covers how to interface microcontrollers with various external devices and systems by writing complete drivers to UART, SPI, I2C (Atmega)

- **Topics Covered:**
  - Communication Protocols (UART, SPI, I2C)
  - Timers
  - ADC (Analog to Digital Converter)
  - DAC (Digital to Analog Converter)


## Getting Started

To get started with the materials in this repository:

1. Clone the repository:
   ```sh
   git clone https://github.com/mohammad-alaa-ma/Embedded-Systems.git
