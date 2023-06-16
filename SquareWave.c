#include<reg51.h>
void delay_ms(unsigned int);
void main(void)
{
P1=0x00;
while(1)
{
P1=0xff;
delay_ms(1);
P1=0x00;
delay_ms(1);
}
}
void delay_ms(unsigned int k)
{
unsigned int i,j;
for(i=0;i<k;i++)
{
for(j=0;j<1275;j++);
}
}