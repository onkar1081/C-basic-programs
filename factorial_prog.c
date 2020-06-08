#include<stdio.h>
void main()
{
    int i=1,c=1,a;
    printf("enter the no\n");
    scanf("%d",&a);
    while(i<=a)
    {
        c=c*i;
        i=i+1;
    }
    printf("\n%d",c);
}
