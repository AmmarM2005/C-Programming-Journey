#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter Angle A :-");
    scanf("%d",&a);
    printf("Enter Angle B :-");
    scanf("%d",&b);
    printf("Enter Angle C :-");
    scanf("%d",&c);
    d=a+b+c;
    {
       if(a<=0 || b<=0 || c<=0)
       {
           printf("It is not a Triangle");
       }
       else if(d!=180)
       {
           printf("It is not a Triangle");
       }
       else
       {
            if(a==60 && b==60 && c==60)
            {
                printf("It is an Equilateral Triangle");
                return;
            }
            if(a==90 || b==90 || c==90)
            {
                printf("It is a right angle Triangle");
                return;
            }
            else if(a>=b+c || b>=a+c || c>=b+a)
            {
                printf("This is a Triangle");
            }
        }
     return 0;
     }
}
