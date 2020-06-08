#include<stdio.h>
void main()
{
int a,b=0,sum=0;
printf("enter no\n");
scanf("%d",&a);
while(a!=0)
{
b=b*10;
b=b+a%10;
a=a/10;
}
printf("%d",b);
}
