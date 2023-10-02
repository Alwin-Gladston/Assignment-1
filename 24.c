//Calculate the sum of natural no. using the while loop
#include <stdio.h>
int main () 
{
    int sum=0,m=1;
    while (m<=9)
    {
        sum=sum+m;
        m++;
    }
    printf("%d",sum);
    return 0;
}