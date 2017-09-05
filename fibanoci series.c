#include<stdio.h>
#include<conio.h>
void main()
{
int first=0,second=1,c,i,n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 if(i<=1)
 {
 c=i;
 }
 else
 {
 c=first+second;
 first=second;
 second=c;
 }
 printf("\n%d",c);
}
getch();
}
