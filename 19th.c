#include<stdio.h>
int main()
{
int a,b,ch;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case1:printf("sum=%d",a+b);
case2:printf("sub=%d",a-b);
default:printf("invalid operator");
}
}








