#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("before swapping\n");
printf("a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("after swapping\n");
printf("b=%d a=%d",b,a);
}


