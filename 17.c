//Checking number if even or odd
#include <stdio.h>
int main ()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Entered number id even.");
    }
    else 
    {
        printf("Entered number is odd.");
    }
    return 0;
}