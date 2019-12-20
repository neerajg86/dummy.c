#include<stdio.h>
#include<conio.h>

void main(void)
{
FILE *fp;
char filename[80];
long length;
clescr();

printf("enter file name \n");
gets(filename);
fp=fopen(filename,"rb");

if(fp==NULL){
printf("file not found\n");
}
else{
fseek(fp,0L,SEEK_END);
length=ftell(fp);
printf("size of the fill is %1db in bytes \n",length);
fclose(fp);
}
getch();
}