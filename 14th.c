#include<stdio.h>
int main()
{
int a,b,c,d,e,t,av;
printf("enter the marks of the subjects a,b,c,d,e\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
t=a+b+c+d+e;
printf("total of the marks of the subjects %d\n",t);
av=t/5;
printf("average of the marks of the subjects %d\n",av);
}


