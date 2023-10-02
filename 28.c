//Program to find LCM of two number in C using while loop
#include <stdio.h>
int main ()
{
    int m=1,a,b,sum=1,s,n;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    s=a;
    n=b;
    if (a!=0||b!=0)
    {
        while (m==1)
        {
            if (a%2==0)
            {
                if (b%2==0)
                {
                    sum=sum*2;
                    b=b/2;
                    a=a/2;
                }
                else
                {
                    sum=sum*2;
                    a=a/2;
                }
            }
            else if(b%2==0)
            {
                if (a%2==0)
                {
                    sum=sum*2;
                    b=b/2;
                    a=a/2;
                }
                else
                {
                    sum=sum*2;
                    b=b/2;
                }
            }
            else if (a%3==0)
            {
                if (b%3==0)
                {
                    sum=sum*3;
                    b=b/3;
                    a=a/3;
                }
                else
                {
                    sum=sum*3;
                    a=a/3;
                }
            }
            else if(b%3==0)
            {
                if (a%3==0)
                {
                    sum=sum*3;
                    b=b/3;
                    a=a/3;
                }
                else
                {
                    sum=sum*3;
                    b=b/3;
                }
            }
            else if(a%5==0)
            {
                if (b%5==0)
                {
                    sum=sum*5;
                    b=b/5;
                    a=a/5;
                }
                else
                {
                    sum=sum*5;
                    a=a/5;
                }
            }
            else if(b%5==0)
            {
                if (a%5==0)
                {
                    sum=sum*5;
                    b=b/5;
                    a=a/5;
                }
                else
                {
                    sum=sum*5;
                    b=b/5;
                }
            }
            else if(a%7==0)
            {
                if (b%7==0)
                {
                    sum=sum*7;
                    b=b/7;
                    a=a/7;
                }
                else
                {
                    sum=sum*7;
                    a=a/7;
                }
            }
            else if(b%7==0)
            {
                if (a%7==0)
                {
                    sum=sum*7;
                    b=b/7;
                    a=a/7;
                }
                else
                {
                    sum=sum*7;
                    b=b/7;
                }
            }
            else if(a%11==0)
            {
                if (b%11==0)
                {
                    sum=sum*11;
                    b=b/11;
                    a=a/11;
                }
                else
                {
                    sum=sum*11;
                    a=a/11;
                }
            }
            else if(b%11==0)
            {
                if (a%11==0)
                {
                    sum=sum*11;
                    b=b/11;
                    a=a/11;
                }
                else
                {
                    sum=sum*11;
                    b=b/11;
                }
            }
            else 
            {
                m++;
                break;
            }
        }
        while (m==2)
        {
            if (a%a==0)
            {
                sum=sum*a;
                a=0;
                m++;
            }
            else if (b%b==0)
            {
                sum=sum*b;
                b=0;
                m++;
            }
            else if (a==1||b==1)
            {
                break;
            }
            else
            {
                break;
            } 
        }
    }
    printf("LCM=%d",sum);
    return 0;
}