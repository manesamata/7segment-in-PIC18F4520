#include<p18f4520.h>
void main()
{
TRISA=0X00;
TRISD=0X00;
PORTA=0X01;
while(1)
{
PORTD=0X6F;
}
}