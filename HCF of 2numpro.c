#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,res=0,i;
clrscr();
for(i=2;i<=n1 && i<=n2;i++)
{
  if(n1%i==0 && n2%i==0)
  {
   res=i;
   }
}
printf("The GCD of %d and %d is %d:",n1,n2,res);
getch();
}
