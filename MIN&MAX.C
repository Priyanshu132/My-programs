#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10],max,min;
 clrscr();
 printf("enter the element of array");
 for(i=0;i<=9;i++)
 scanf("%d",&a[i]);
 max=a[0];
 for(i=1;i<=9;i++)
 {
  if(max<a[i])
  max=a[i];
 }
 printf("max=%d\n",max);
 min=a[0];
 for(i=1;i<=9;i++)
 {
  if(min>a[i])
  min=a[i];
 }
 printf("min=%d",min);
 getch();
}