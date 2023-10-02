//Find the GCD of two no. using loop
#include <stdio.h>
int main ()
{
    int m=1,sum=1,a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (a!=0||b!=0)
    {
        while (m==1)
        {
            if (a%2==0 && b%2==0)
            {    
                sum=sum*2;
                b=b/2;
                a=a/2;
            }
            else if (a%3==0 && b%3==0)
            {
                sum=sum*3;
                b=b/3;
                a=a/3;
            }
            else if (a%5==0 && b%5==0)
            {
                sum=sum*5;
                b=b/5;
                a=a/5;
            }
            else if (a%7==0 && b%7==0)
            {
                sum=sum*7;
                b=b/7;
                a=a/7;
            }
            else if(a%11==0 && b%11==0)
            {
                sum=sum*11;
                b=b/11;
                a=a/11;
            }
            else if (a%13==0 && b%13==0)
            {
                sum=sum*13;
                b=b/13;
                a=a/13;
            }
            else if (a%17==0 && b%17==0)
            {
                sum=sum*17;
                b=b/17;
                a=a/17;
            }
            else 
            {
                break;
            }
        }
    }
    printf("GCD=%d",sum);
    return 0;
}