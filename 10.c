//Find the character is vowel or not
#include <stdio.h>
int main ()
{
    char letter;
    printf("Enter letter:");
    scanf("%c",&letter);
    switch (letter)
    {
    case 'a':
    printf("Entered alphabet is a vowel.");
    break;
    case 'A':
    printf("Entered alphabet is a vowel.");
    break;
    case 'e':
    printf("Entered alphabet is a vowel.");
    break;
    case 'E':
    printf("Entered alphabet is a vowel.");
    break;
    case 'i':
    printf("Entered alphabet is a vowel.");
    break;
    case 'I':
    printf("Entered alphabet is a vowel.");
    break;
    case 'o':
    printf("Entered alphabet is a vowel.");
    break;
    case 'O':
    printf("Entered alphabet is a vowel.");
    break;
    case 'u':
    printf("Entered alphabet is a vowel.");
    break;
    case 'U':
    printf("Entered alphabet is a vowel.");
    break;
    default:
    printf("Entered alphabet is a consonant.");
    break;
    }
    return 0;
}