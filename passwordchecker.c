#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char password[100];
    int length , haslower=0, hasupper=0,hasdigit=0,hasspace=0;
    printf("Enter The Password : ");
    gets(password);
    length = strlen(password);

    if(length<8)
    {
        printf("Please Enter a valid password of 8 characters");
        return 0 ;
    }
    for(int i=0;i<length;i++)
    {
        if(isupper(password[i]))
        {
            hasupper=1;
        }
        else if(islower(password[i]))
        {
            haslower=1;
        }
        else if (isspace(password[i]))
        {
            hasspace = 1;
        }
        else if (isdigit(password[i]))
        {
            hasdigit = 1;
        }
    }
    if(hasspace)
    {
        printf("The password should not contain any spaces");
    }
    if(haslower && hasupper && hasdigit)
    {
        printf("The password is valid");
    }
    else
    {
        printf("The password is invalid");
    }
    return 0;
}
