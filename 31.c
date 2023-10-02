//Count the no. of digits of a integer using the while loop
#include <stdio.h>
int main () 
{
    int a,b,count=0;
    printf("Enter number:");
    scanf("%d",&a);
    while (a>0 || a<0) 
    {
        count++;
        a=a/10;
    }
    printf("Number of digits is=%d",count);
    return 0;
}