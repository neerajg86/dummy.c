#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter the year \n");
scanf("%d",&year);
if(year%400==0)
{
	printf("%d is leap year\n",year);
}
else if(year%100==0)
{
printf("%d is not leap year\n",year);
}
else if(year%4==0)
{
printf("%d is a leap year \n",year);
}
else{
printf("%d is not leap year\n",year);
}
getch();
}
