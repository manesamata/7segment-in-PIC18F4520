#include<p18f4520.h>
void main()
{
TRISD=0X00;
TRISA=0X00;
PORTA=0X0F;
while(1)
{
PORTD=0X21;
PORTAbits.RA0=1;
PORTAbits.RA1=0;
PORTAbits.RA2=0;
PORTAbits.RA3=0;

PORTD=0XCB;
PORTAbits.RA1=1;
PORTAbits.RA0=0;
PORTAbits.RA2=0;
PORTAbits.RA3=0;

PORTD=0X6B;
PORTAbits.RA2=1;
PORTAbits.RA0=0;
PORTAbits.RA1=0;
PORTAbits.RA3=0;

PORTD=0X2D;
PORTAbits.RA3=1;
PORTAbits.RA0=0;
PORTAbits.RA1=0;
PORTAbits.RA2=0;

}
}

