#include<stdio.h>
main()
{
    int cp,sp;
    printf("Enter cost price and selling price\n");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    {
        printf("loss");
    }
    else if (sp>cp)
    {
        printf("profit");
    }
    else if(sp==cp)
    {
        printf("no profit no loss");
    }
}
