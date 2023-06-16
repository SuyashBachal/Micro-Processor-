#include<reg51.h>
void main(void)
{
unsigned char p,q,r;
unsigned int s;
P1=0x00;
P2=0x00;
p=0x04;
q=0x02;
r=p+q;
P1=r;
s=p*q;
P2=s;
while(1);
}