#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 float a,b,sum,subtract,divide,multiply;
 clrscr();
 printf("enter the value of a and b");
 scanf("%d%f%f",&i,&a,&b);
 switch(i)
 {
 case 1:
 sum=a+b;
 printf("%.2f",sum);
 break;
 case 2:
 subtract=a-b;
 printf("%.2f",subtract);
 break;
 case 3:
 multiply=a*b;
 printf("%.2f",multiply);
 break;
 case 4:
 divide=a/b;
 printf("%.2f",divide);
 }
 getch();
 }
