//Leap year program in C with logic,explanation,output
#include <stdio.h>
int main ()
{
    //Logic:- To find the leap year we are going to divide it by 4
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    return 0;
}