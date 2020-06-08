#include<stdio.h>
int main()
{
    int n,rev_integer=0,remainder,ori_integer;
    printf("Enter the number\n");
    scanf("%d",&n);
    ori_integer=n;
    while(n!=0)
    {
        remainder=n%10;
        rev_integer=rev_integer*10+remainder;
        n=n/10;
    }
    if(ori_integer==rev_integer)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not palindrome number");
    }
}
