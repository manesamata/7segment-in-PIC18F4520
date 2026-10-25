#include<p18f4520.h>
void delay(void);
void main()
{
unsigned char digit[10]={0XE7,0X21,0XCB,0X6A,0X2D,0X6E,0XE6,0X23,0XEF,0X6F};
int i;
TRISA=0X00;
TRISD=0X00;
PORTA=0X01;
while(1)
{
for(i=0;i<10;i++)
{
PORTD=digit[i];
delay();
}
}
}
void delay(void)
{
int i,j;
for(i=0;i<500;i++)
{
for(j=0;j<500;j++)
{
}
}
}
