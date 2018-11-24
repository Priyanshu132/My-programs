#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,k=1;
 clrscr();
 printf("enter the number");
 scanf("%d",&n);
 for(i=n;i>;i--)
 {
 k=k*i;
 }
 printf("%d",k);
 getch();
}