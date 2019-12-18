#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int  gd=DETECT,gm;
	int x=300,y=300,a,c=4;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	outtext("concentric circle");


	for(a=25;a<=100;a=a+3)
	{
		setcolor(c);
		circle(x,y,a);
		delay(40);
		c++;
	}
	getch();
	return 0;
}
