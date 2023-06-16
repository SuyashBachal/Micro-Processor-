#include<regx51.h>
void delay()
{
unsigned char i,j,k;
for(i=0;i<6;i++)
for(j=0;j<50;j++)
for(k=0;k<50;k++);
}
unsigned char g_byscancode=0xfe;
unsigned char g_byretcode=0x00;
unsigned char g_bytemp;
unsigned int g_bycode;
void main()
{
P3=0x00;
P2=0x00;
P0=0xff;
while(1)
{
g_bytemp=P0;
g_bytemp=g_bytemp | 0x0f;
g_bytemp=g_bytemp & g_byscancode;
P0=g_bytemp;
g_byretcode=P0;
if((g_byretcode & 0xf0)!=0xf0)
{
if(g_byretcode==0xee)
{
P2=0x88;
}
else if(g_byretcode==0xed)
{
P2=0x2b;
}
else if(g_byretcode==0xeb)
{
P2=0x08;
}
else if(g_byretcode==0xe7)
{
P2=0x9c;
}
else if(g_byretcode==0xde)
{
P2=0xeb;
}
else if(g_byretcode==0xdd)
{
P2=0x19;
}
else if(g_byretcode==0xdb)
{
P2=0x09;
}
else if(g_byretcode==0xd7)
{
P2=0x68;
}
else if(g_byretcode==0xbb)
{
P2=0x48;
}
else if(g_byretcode==0xbe)
{
P2=0x4c;
}
else if(g_byretcode==0xbd)
{
P2=0x18;
}
else if(g_byretcode==0xb7)
{
P2=0x0c;
}
else if(g_byretcode==0x77)
{
P2=0x1e;
}
else if(g_byretcode==0x7b)
{
P2=0x38;
}
else if(g_byretcode==0x7d)
{
P2=0xcb;
}
else if(g_byretcode==0x7e)
{
P2=0x49;
}
delay();
P0=0xff;
}
g_byscancode=~g_byscancode;
g_byscancode<<=1;
g_byscancode=~g_byscancode;
if(g_byscancode==0xef)
g_byscancode=0xfe;
}
}