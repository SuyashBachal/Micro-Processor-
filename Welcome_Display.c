#include<regx51.h>
sbit RS=P3^2;
sbit RW=P3^1;
sbit EN=P3^0;
#define DATAPORT P2
unsigned char g_bydata=0xff;
void delay()
{
unsigned char i,j,k;
for(i=0;i<6;i++)
for(j=0;j<50;j++)
for(k=0;k<50;k++);
}
void lcd_cmd(unsigned char p_bycmd)
{
RS=0;
RW=0;
DATAPORT = p_bycmd;
EN=1;
delay();
EN=0;
}
void lcd_dat(unsigned char p_bydat)
{
RS=1;
RW=0;
DATAPORT = p_bydat;
EN=1;
delay();
EN=0;
}
void lcd_init()
{
lcd_cmd(0x38);
delay();
lcd_cmd(0x0c);
delay();
lcd_cmd(0x01);
delay();
}
void display_row(unsigned char p_byrow, unsigned char p_bydatarr[16])
{
unsigned char count, ch;
if(p_byrow)
lcd_cmd(0xc0);
else
lcd_cmd(0x80);
delay();
for(count=0;count<16;count++)
{
if(ch=p_bydatarr[count])
{
lcd_dat(ch);
delay();
}
else
{
while(count<16)
{
lcd_dat();
delay();
count++;
}
}
}
}
void main()
{
lcd_init();
while(1)
{
display_row(0,"WELCOME");
}
}