#include<stdio.h>
#include<conio.h>
void main()
{
int a=23,b=45;
clrscr();
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
}
printf("%d",a);
getch();
}
