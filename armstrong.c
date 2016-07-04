#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,i,sum=0,temp;
clrscr();
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
n=n/10;
sum=sum+(r*r*r);

}if(sum==temp)
printf("Armstrong no");
else
printf("not armstrong no");
getch();
}
