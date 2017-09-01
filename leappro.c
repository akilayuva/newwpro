#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the year:");
scanf("%d",&a);
if(a%4==0)
{
  if(a%100)
  {
    if(a%400)
    {
     printf("%d is leap year",a);
     }
    else
    {
    printf("%d is not a leap year",a);
    }
  }
  else
   {
   printf("%d is not a leap year",a);
   }
 }
 else
 {
 printf("%d is not a leap year",a);
 }
 getch();
 }
  
