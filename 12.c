//C program to read integer and print first three powers (N^1,N^2,N^3)
#include <stdio.h>
int main ()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    printf("%d to the power of 1=%d\n",a,a);
    printf("%d to the power of 2=%d\n",a,a*a);
    printf("%d to the power of 3=%d",a,a*a*a);
    return 0;
}