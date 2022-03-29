//preprocessor directives
#include<stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    if (c>=65 && c<=98)
        c=c+32;

    switch(c)
    {
    case 'a':
        printf("It is a vowel");
        break;
    case 'e':
        printf("It is a vowel");
        break;
    case 'i':
        printf("It is a vowel");
        break;
    case 'o':
        printf("It is a vowel");
        break;
    case 'u':
        printf("It is a vowel");
        break;
    default:
        printf("It is a consonant");
        break;
    }
}
