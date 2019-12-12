#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();



int  r;
float num1;
printf("enter the num1");
scanf("%d",&num1);
float n2;
printf("enter the n2");
scanf("%d",&n2);
char sy;
printf("enter the symbol");
scanf("%c",&sy);
switch(sy)
{
case '-':
r=num1-n2;
printf("%f",r);
break;

case'+':
r=num1+n2;
printf("%f",r);
break;

case'*':
r=num1*n2;
printf("%f",r);
break;

case'/':
r=num1/n2;
printf("%f",r);
break;

default:
printf("the symbol is wrong");
}
getch();
}
