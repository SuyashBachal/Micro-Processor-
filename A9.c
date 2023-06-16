#include<reg51.h>
#define Display_7seg P1 void delay_ms(unsigned int);
void main(void)
{
unsigned char counter; unsigned char
arr[10]=(0xc0,0xf9,0xa4,0xb0,0x99,0x92,
0x82,0xf8,0x80,0x98};
P1-0x00;
while(1) {
for (counter=0;counter<10;counter++) {
Display_78eg-arr[counter];
delay_ms(200);
}
void delay_ms(unsigned int k)
int i,j;
for(i=0;i<k;i++)
for(j=0;j<1275;j++);
}
}

#include<regx51.h>
#define SELECTDISP P3
#define DATAPORT P2
#define SEL_DISP_1 0X7f
#define SEL_DISP_2 0Xbf
#define SEL_DISP_3 0Xdf
#define SEL_DISP_4 0Xef
void delay()
{
unsigned char i,j,k;
for(i=0;i<6;i++)
for(j=0;j<200;j++)
for(k=0;k<200;k++);
}
void main ()
{
SELECTDISP = 0x0f;
DATAPORT = 0x00;
DATAPORT = 0xff;
delay();
while(1)
{
SELECTDISP = SEL_DISP_1;
DATAPORT = 0xeb;
delay();
SELECTDISP = SEL_DISP_2;
DATAPORT = 0x4c;
delay();
SELECTDISP = SEL_DISP_3;
DATAPORT = 0x49;
delay();
SELECTDISP = SEL_DISP_4;
DATAPORT = 0x2b;
delay();
}
}