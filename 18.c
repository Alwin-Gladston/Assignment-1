//Leap year program in C with logic,explanation,output
//Logic:-Finding leap year using if-else in C 
//Explanation:-User enters a year and it gets divided by 4. If the remainder is 0 (True) then it is a leap year
//             and if the remainder is not 0 (False) then it is not a leap year
//Output1 (If condition is true):-'year' is a leap year
//Output2 (If condition is false):-'year' is not a leap year 
#include <stdio.h>
int main ()
{
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