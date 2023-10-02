//Check whether you are eligible for voting or not
#include <stdio.h>
int main ()
{
    int a;
    printf("Please enter your age:");
    scanf("%d",&a);
    if (a<=18)
    {
        printf("You are not eligible for voting.");
    }
    else 
    {
        printf("You are eligible for voting.");
    }
    return 0;
}