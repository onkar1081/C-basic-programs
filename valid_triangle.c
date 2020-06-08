#include<stdio.h>
main()
{
int a,b,c;
printf("enter 3 angles\n");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
{
printf("triangle is valid");
}
else
{
printf("triangle is not valid");
}
}
