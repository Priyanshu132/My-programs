#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,n,sum=0;
 clrscr();
 printf("enter the number");
 scanf("%d",&n);
 a=n;
 while(a!=0)
 {
 b=a%10;
 a=a/10;
 sum=sum+(b*b*b);
 }
 if(sum==n)
 printf("number is armstrong");
 else
 printf("number is not armstrong");
 getch();
}
