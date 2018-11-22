#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum;
 clrscr();
 printf("enter the no. of terms");
 scanf("%d",&n);
 sum=(4*(n*n+n)*(2*n+1))/6+n-(4*(n*n+n))/2;
 printf("%d",sum);
 getch();
 }