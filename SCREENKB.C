#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i=0,gd=DETECT,gm,x,y,xx,yy,rad;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=getmaxx();
	y=getmaxy();
	while(!kbhit())
	{
	i++;
	setfillstyle(random(i),random(i));
	circle(xx=random(x),yy=random(y),random(30));
	floodfill(xx,yy,getmaxcolor());
	delay(100);
	}


	getch();



}