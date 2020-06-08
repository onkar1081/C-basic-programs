#include<stdio.h>
main()
{
    int a,b;
    printf("Enter 2 number\n",a,b);
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);

}
