//C program to check uppercase or lowercase or digit or special character
#include <stdio.h>
int main ()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if (a>=65 && a<90)
    {
        printf("The character is in uppercase.\n");
    }
    else if (a>=97 && a<=122)
    {
        printf("The character is in lowercase.\n");
    }
    else if (a>=48 && a<=57)
    {
        printf("The character is in digits.\n");
    }
    else
    {
        printf("The character is a special symbol.\n");
    }
    return 0;
}