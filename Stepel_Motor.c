Clockwise rotation
#include<reg51.h>
void delay(void);
void main ()
{
while(1)
{
P0 = 0x05 ;
delay() ;
P0 = 0x06 ;
delay() ;
P0 = 0x0a ;
delay() ;
P0 = 0x09 ;
delay() ;
P0 = 0x0a ;
delay() ;
}
}
void delay(void)
{
unsigned int i,j;
for(i=0;i<1000;i++)
for(j=0;j<100;j++);
}
anticlockwise :-
#include<reg51.h>
void delay(void);
void main ()
{
while(1)
{
P0 = 0x09 ;
delay() ;
P0 = 0x0a ;
delay() ;
P0 = 0x06 ;
delay() ;
P0 = 0x05 ;
delay() ;
}
}
void delay(void)
{
unsigned int i,j;
for(i=0;i<1500;i++)
for(j=0;j<100;j++);
}