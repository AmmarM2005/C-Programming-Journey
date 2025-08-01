#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the Year:");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("Enter Valid Year!!!");
    }
    else if((a%4==0 && a%100 != 0) || (a%400==0))
    {
        printf("The year is a leap year");
    }

    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}
