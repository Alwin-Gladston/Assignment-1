//given date month and the year is correct or not using if-else
#include <stdio.h>
int main ()
{
    int d,m,y;
    printf("Enter date (DD):");
    scanf("%d",&d);
    printf("Enter month (MM):");
    scanf("%d",&m);
    printf("Enter year (YYYY):");
    scanf("%d",&y);
    printf("You have entered %d-%d-%d\n",d,m,y);
    if (y%4!=0)
    {
        printf("Entered year is not leap year.\n");
        if (1<=m && m<=12)
        {
            printf("Entered month is correct.\n");
            if (m==1||m==3||m==5||m==7||m==8||m==10||m==12 && 1<=d && d<=31)
            {
                printf("Entered date is correct.");
            }
            else if (m==4||m==6||m==9||m==11 && 1<=d && d<=30)
            {
                printf("Entered date is correct.");
            }
            else if (m==2 && 1<=d && d<=28)
            {
                printf("Entered date is correct.");
            }
            else 
            {
                printf("Entered date is incorrect.");
            }
        }
        else 
        {
            printf("Entered month is incorrect.");
        }
    }
    else
    {
        printf("Entered year is a leap year.\n");
        if (1<=m && m<=12)
        {
            printf("Entered month is correct.");
            if (m==1||m==3||m==5||m==7||m==8||m==10||m==12 && 1<=d && d<=31)
            {
                printf("Entered date is correct.");
            }
            else if (m==4||m==6||m==9||m==11 && 1<=d && d<=30)
            {
                printf("Entered date is correct.");
            }
            else if (m==2 && 1<=d && d<=29)
            {
                printf("Entered date is correct.");
            }
            else 
            {
                printf("Entered date is incorrect.");
            }
        }
        else 
        {
            printf("Entered month is incorrect.");
        }
    }
    return 0;
}