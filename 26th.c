#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r;
float emi,x,z,y;
printf("enter the value of p,t,r\n");
scanf("%d%d%d",&p,&t,&r);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
emi=(p*y*z)/(z-1);
printf("z=%f",z);
printf("y=%f",y);
printf("x=%f",x);
printf("emi=%f",emi);
}

