//Check character is vowel or not using if-else
#include <stdio.h>
int main ()
{
    char letter;
    printf("Enter alphabet:");
    scanf("%c",&letter);
    if (letter=='a'||'A')
    {
        printf("%c is a vowel.",letter);
    }
    else if (letter=='e'||'E')
    {
        printf("%c is a vowel.",letter);
    }
    else if (letter=='i'||'I')
    {
        printf("%c is a vowel.",letter);
    }
    else if (letter=='o'||'O')
    {
        printf("%c is a vowel.",letter);
    }
    else if (letter=='u'||'U')
    {
        printf("%c is a vowel.",letter);
    }
    else 
    {
        printf("%c is a consonant.",letter);
    }
    return 0;
}