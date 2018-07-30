#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\nenter a number")
scanf("%d",&n);
if(n>0)
{
printf("\nthe number is positive");
}
elseif(n<0)
{
printf("\nthe number is negative");
}
else
{
printf("\nthe number is zero");
}
getch();
}
