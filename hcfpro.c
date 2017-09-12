#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res=0,i;
clrscr();
scanf("%d %d",&a,&b);
for(i=2;i<=a && i<=b;i++)
{
  if(a%i==0 && b%i==0)
  {
   res=i;
   }
}
printf("The GCD of %d and %d is %d:",a,b,res);
getch();
}
