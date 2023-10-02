//C program to reverse a number using for loop
#include <stdio.h>
int main () 
{
    int a,b,sum=0;
    printf("Enter number:");
    scanf("%d",&a);
     for (a>0;a;a=a/10) 
    {
        b=a%10;
        sum=sum*10+b;
    }
    printf("%d",sum);
    return 0;
}