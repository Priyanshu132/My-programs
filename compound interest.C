#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int p,a,ci;
 float t,r,w;
 clrscr();
 printf("enter the principal amount,rate of interest,time period");
 scanf("%d%f%f",&p,&r,&t);
   w=pow((1+r/100),t);
   a=p*w;
   ci=a-p;
   printf("compound interest=%d",ci);
   getch();
}
