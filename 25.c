//Write a C program to print the multiplication table of N
#include <stdio.h>
int main ()
{
    int a,i,sum=1;
    printf("Enter your number for table:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        sum=a*i;
        printf("%dx%d=%d\n",a,i,sum);
    }
    return 0;
}