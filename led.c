/*
 * led.c
 *
 * Created: 4/5/2019 2:50:40 PM
 * Author : Sahil S. Mahajan
 * Description: Driver for LED
 *
 * Notes: 8 LEDs are connected to Port 0 of the 8051 microcontroller. As an example we can turn on the 3rd, 6th, and 7th LEDs.
 *          00100110 binary is 26 in hexadecimal, so we can program PORT 0 to be 0x26.              
 *
 */
 
#include <REG51F.H>

void main()
{

  while(1)
  {
        P0=0X26;
  }

}


