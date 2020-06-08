#include<stdio.h>
void main()
{
    int a,i,rem,div,sum=0;
    printf("enter number\n");
    scanf("%d",&a);
    for(i=1; i<a; i++)
    {
        rem=a%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("perfect no");
    }
    else
    {
        printf("not a perfect no");
    }
}
