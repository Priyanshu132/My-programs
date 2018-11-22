#include<stdio.h>
#include<conio.h>
void main()
{
 int a[6],n=0,p=0,i,j;
 clrscr();
 for(i=0;i<=2;i++)
{
 scanf("%d",&a[i]);
 scanf("\n");
 }
 for(j=3;j<=5;j++)
 scanf("%d",&a[j]);
 for(i=0;i<=2;i++)
 {
  for(j=3+i;j<=3+i;j++)
  {
   if(a[i]>a[j])
   {
    n=n+1;
   }
  }
 }
    printf(" %d",n);
    for(i=0;i<=2;i++)
    {
    for(j=3+i;j<=3+i;j++)
    {
    if(a[i]<a[j])
    {
    p=p+1;
    }
    }
    }
    printf(" %d",p);
    getch();
    }
