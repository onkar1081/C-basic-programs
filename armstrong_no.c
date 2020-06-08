#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter the no\n");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    f=(b*b*b)+(d*d*d)+(e*e*e);
    if(f==a)
    {
        printf("\nArmstrong");
    }
    else
    {
        printf("\nnot armstrong");
    }
}
