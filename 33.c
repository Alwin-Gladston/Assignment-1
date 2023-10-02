//Write a C program to make a simple calculater using switch
#include <stdio.h>
#include <math.h>
int main ()
{
    char operation; 
    double n1,n2;
    printf("Choose operator:\n1.Add '+'\n2.Subtract '-'\n3.Multiply '*'\n4.Divide '/'\n5.Square '^'\n6.Square root 's'");
    printf("\nEnter operator:");
    scanf("%c",&operation);
    printf("Enter operand 1:");
    scanf("%lf",&n1);
    printf("Enter operand 2:");
    scanf("%lf",&n2);
    switch(operation)
    {
        case'+':
        printf("%.llf+%.llf=%.llf",n1,n2,n1+n2);
        break;
        case'-':
        printf("%.llf-%.llf=%.llf",n1,n2,n1-n2);
        break;
        case'*':
        printf("%.llf*%.llf=%.llf",n1,n2,n1*n2);
        break;
        case'/':
        printf("%.llf/%.llf=%.llf",n1,n2,n1/n2);
        break;
        case'^':
        printf("%.llf*%.llf=%.llf\n",n1,n1,n1*n1);
        printf("%.llf*%.llf=%.llf",n2,n2,n2*n2);
        break;
        case's':
        printf("sqrt%.llf=%.llf\n",n1,sqrt(n1));
        printf("sqrt%.llf=%.llf",n2,sqrt(n2));
        break;
        default:
        printf("Error! Operator is not correct");
    }
    return 0;
}