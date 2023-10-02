//Program for finding greater between two number
#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (a<b)
    {
        printf("%d is greater than %d",b,a);
    }
    else
    {
        printf("%d is greater then %d",a,b);
    }
    return 0;
}