#include<stdio.h>
#include<conio.h>
void main()
{
int a,res=0,rem;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
res=(res*10)+rem;
a=a/10;
}
printf("The reverse number is %d",res);
getch();
}
