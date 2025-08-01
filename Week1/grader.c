#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Grade:");
    scanf("%d",&a);
    if(a>=0 && a<60)
    {
        printf("Fail");
    }
    else if(a>=60 && a<=69)
    {
        printf("D");
    }
    else if(a>=70 && a<=79)
    {
        printf("C");
    }
    else if(a>=80 && a<=89)
    {
        printf("B");
    }
    else if(a>=90 && a<=99)
    {
        printf("A");
    }
    else if(a==100 || a>100)
    {
        printf("A+");
    }
    else
    {
        printf("Invalid Grade")
    }
}
