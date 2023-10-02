//Palindrome program in C using while loop
#include <stdio.h>
int main ()
{
    int a,b,sum=0,temp;
    
    printf("enter the number:");
    scanf("%d",&a);
    temp=a;
    while (a>0)
    {
        b=a%10;
        sum=sum*10+b;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("%d is palindrome",sum);
    }
    else
    {
        printf("%d is not palindrome",sum);
    }
    return 0;
}