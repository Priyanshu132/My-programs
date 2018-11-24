#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i,n;
 clrscr();
 printf("enter the value of a");
 scanf("%d",&a);
 for(i=2;i<=a-1;i++)
 {
  if(a%i==0)
  {
   printf("number is not prime");
   break;
  }
  else
  {
   printf("number is prime");
   break;
  }

}
 getch();
}
