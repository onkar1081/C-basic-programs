#include<stdio.h>
main()
{
    int a,i,c=0;
    printf("enter number\n");
    scanf("%d",&a);
    for(i=2; i<a; i++)
    {
        if(a%i==0)
        {
            c=1;
        }
    }
    if(c==1)
        {
        printf("\nnot prime");
        }
    else
        {
        printf("\nprime");
        }
}
