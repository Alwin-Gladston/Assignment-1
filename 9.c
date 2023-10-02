//Check a number is positive or negative
#include <stdio.h>
int main ()
{
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Entered number is positive.");
    }
    else if (a==0)
    {
        printf("Number is 0");
    }
    else
    {
        printf("Entered number is negative.");
    }
    return 0;
}