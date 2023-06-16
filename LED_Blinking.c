#include <reg51.h>
void delay(void);
void main ()
{
P1=0x00;
while(1)
{
P1=0xff; //////relay is connected to port 1.0 pin of 8051 mictocontroller
delay(10);
P1=0x00;
delay(10);
 }
 }
void delay(void)
{
unsigned int i,j;
for(i=0;i<1500;i++)
for(j=0;j<100;j++);
}