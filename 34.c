//Write a C program to find a grade of a student using switch case
#include <stdio.h>
int main () 
{
    int a,b,c,d,e,f,avg,m=1;
    while (m==1)
    {
        printf("Choose:\n1.Calculate and grade.\n2.Only grade.\n");
        printf("Enter serial no.:");
        scanf("%d",&f);
        if (f==1)
        {
            printf("Enter subject 1 marks:");
            scanf("%d",&a);
            printf("Enter subject 2 marks:");
            scanf("%d",&b);
            printf("Enter subject 3 marks:");
            scanf("%d",&c);
            printf("Enter subject 4 marks:");
            scanf("%d",&d);
            printf("Enter subject 5 marks:");
            scanf("%d",&e);
            avg=(a+b+c+d+e)/5;
            switch(avg)
            {
                case(100):
                printf("A");
                break;
                default:
                break;
            }
            switch (avg/10)
            {
                case(10):
                break;
                case(9):
                printf("A");
                break;
                case(8):
                printf("B");
                break;
                case(7):
                printf("C");
                break;
                case(6):
                printf("D");
                break;
                case(5):
                case(4):
                printf("E");
                break;
                case(3):
                case(2):
                case(1):
                case(0):
                printf("Fail");
                break;
                default:
                break;
            }
            break;
        }
        else if (f==2)
        {
            printf("Enter your calculated marks:");
            scanf("%d",&avg);
            switch(avg)
            {
                case(100):
                printf("A");
                break;
                default:
                break;
            }
            switch (avg/10)
            {
                case(10):
                break;
                case(9):
                printf("A");
                break;
                case(8):
                printf("B");
                break;
                case(7):
                printf("C");
                break;
                case(6):
                printf("D");
                break;
                case(5):
                case(4):
                printf("E");
                break;
                case(3):
                case(2):
                case(1):
                case(0):
                printf("Fail");
                break;
                default:
                break;
            }
            break;
        }
        else
        {
            printf("There is no such no.\n");
        }
    }
    return 0;
}