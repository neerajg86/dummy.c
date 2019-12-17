#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int r ,i,a,b,x,y,gd=DETECT,gm;
float pi=3.14;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(0);
bar(10,10,630,470);
delay(100);


setcolor(3);
setfillstyle(SOLID_FILL,9);
bar(10,10,630,400);
delay(100);

setcolor(9);
setfillstyle(SOLID_FILL,10);
bar(10,400,630,470);
delay(100);

setcolor(0);
setfillstyle(SOLID_FILL,8);
bar(350,420,340,70);
delay(100);

setcolor(0);
setfillstyle(SOLID_FILL,RED);
bar(240,110,290,80);
delay(100);

bar(290,70,340,100);
delay(100);

bar(190,120,240,90);
delay(100);

setcolor(15);
setfillstyle(SOLID_FILL,15);
bar(190,150,240,121);

delay(100);

bar(240,110,290,140);
delay(100);


bar(290,100,340,130);
delay(100);

setcolor(2);
setfillstyle(SOLID_FILL,2);
bar(190,180,240,150);
delay(100);

bar(240,140,290,170);
delay(100);

bar(290,130,340,160);
delay(100);

setcolor(YELLOW);
circle(345,70,5);
delay(100);

setcolor(WHITE);
arc(305,100,0,45,50);
delay(100);

line(355,340,355,100);
delay(100);

line(355,340,330,360);
delay(100);

setcolor(16);
settextstyle(SMALL_FONT,0,100);
outtextxy(50,20,"HAPPY INDEPENDENT DAY ");
a=265;
b=125;
r=15;
setcolor(BLUE);
circle(a,b,r);
for(i=0;i<=360;i=i+15)
{
x=r*cos(i*pi/180);
y=r*sin(i*pi/180);
line(a,b,a+x,b-y);
}
getch();
}