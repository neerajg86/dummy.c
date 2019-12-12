#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sn,en;
	clrscr();
	printf("enter value of a n number:");
	scanf("%d",&n);

	printf("enter starting number:");
	scanf("%d",&sn);

	printf("enter ending number:");
	scanf("%d",&en);

	while(sn<=en){
		printf("%d X %d = %d\n",n,sn,n*sn);
		sn++;
	}
	getch();
}