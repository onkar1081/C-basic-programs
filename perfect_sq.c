#include<stdio.h>
void main()
{
    int a,i,c=0;
    printf("enter the no\n");
    scanf("%d",&a);
    for(i=1; i<a; i++)
    {
        if(i*i==a)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("perect square");
    }
    else
    {
        printf("not a perfect square");
    }
}
