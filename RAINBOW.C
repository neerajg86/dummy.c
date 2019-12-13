#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	 int a=0,b;
	 int y,z,i;
	 initgraph(&a,&b,"C:\\TURBOC3\\BGI");
	 y=getmaxx()/2;
	 z=getmaxy()/2;
	 for(i=40;i<300;i++)
	 {
		delay(200);
		setcolor(i/10);

		arc(y,z,0,180,i-10);
	 }
	 getch();
}