#include<stdio.h>
main()
{
int a,b;
printf("Enter 2 numbers\n",a,b);
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);
}
