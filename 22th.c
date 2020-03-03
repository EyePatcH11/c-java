#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,z,i;
printf("enter the values of a,b,c,d\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
z=(a-b)*(a-b)+(c-d)*(c-d);
i=sqrt(z);
printf("i=%d",i);
}

