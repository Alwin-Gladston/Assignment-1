//Largest of three numbers in C using nested if-else
#include <stdio.h>
int main ()
{
    int a,b,c,d,m=1;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    while (m==1)
    {
        if(a<b)
        {
            d=a;
            a=b;
            b=d;
        }
        else if(b<c)
        {
            d=b;
            b=c;
            c=d;
        }
        else if(c>a)
        {
            d=c;
            c=a;
            a=d;
        }
        else
        {
            m=m+1;
        }
    }
    printf("%d>%d>%d\n%d is largest",a,b,c,a);
    return 0;
}