/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.0 Professional
Automatic Program Generator
� Copyright 1998-2010 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 10/2/2019
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*****************************************************/

#include <mega32.h>
#include <delay.h> 
void main(void) { 
// Declare your local variables here 
// Port A initialization 

    DDRA=0b11111111;  // Selector 
    
// Port B initialization 

    DDRB=0b11111111;  // Data  
    
    while (1) { 
    // Place your code here
    delay_ms(1);      
    PORTA=0b11111110;  // number �1� 
    PORTB=0b00111111; 
        
    delay_ms(1);   
    PORTA=0b11111101;  // number �2� 
    PORTB=0b01011011;  // digit �0� 
       
    delay_ms(1);      
    PORTA=0b11111011;  // number �3� 
    PORTB=0b00111111;  // digit �1� 
         
    delay_ms(1);   
    PORTA=0b11111111;  // number �4� 
    PORTB=0b01100111;  // digit �4�

    
    } 
}