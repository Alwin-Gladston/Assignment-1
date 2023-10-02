//Calculate  the factorial of a given number
#include <stdio.h>
int main () 
{
    int num,i=1,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("No Factorial");
    }
    else if(num==0)
    {
        printf("Factorial=1");
    }
    else 
    {  
        while(i<=num)
        {
            fact=fact*i;
            i=i+1;
        }
        printf("Factorial=%d",fact);
    }
    return 0;
}