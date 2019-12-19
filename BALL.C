#include<stdio.h>
#include<graphics.h>

#define height getmaxy()
#define width getmaxx()
#define ground 450
#define maxheight 420

void main()
{
int x,y=0,t=maxheight,c=1;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


for(x=40;x<=getmaxx();x=x+2)
{
//draw ground
rectangle(0,maxheight,getmaxx(),maxheight+5);
floodfill(5,maxheight+3,WHITE);
//draw ball
pieslice(x,y,0,360,20);
//floodfill(x,y,RED);
delay(100);
if(y>maxheight-20)
{
c=0;
t=t-40;
}
if(y<=(maxheight-t))
{
c=1;
}
if(t>=40)
y=y+(c?15:-15);

cleardevice();
if(kbhit())
break;
}
getch();
}
