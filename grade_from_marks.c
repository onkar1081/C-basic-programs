#include<stdio.h>
int main()
{
    int phy,chem,maths,bio,comp;
    float per;
    printf("Enter the marks of 5 subject\n");
    scanf("%d%d%d%d%d",&phy,&chem,&maths,&bio,&comp);
    per=(phy+chem+maths+bio+comp)/5.0;
    printf("Percentage is %.2f\n",per);
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if (per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }


}
