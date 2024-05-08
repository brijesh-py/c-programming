#include <stdio.h>
// #include <conio.h>

//  WAP to print the given alphabet is vowel or consonant by using switch statement

void main()
{
    printf("Vowel or Consonant\n");

    int isVowel;
    char alphabet;
    printf("Enter any alphabet: ");
    scanf(" %c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        isVowel = 1;
        break;
    default:
        isVowel = 0;
    }

    if (isVowel)
        printf("Given alphabet is Vowel.");
    else
        printf("Given alphabet is Consonant.");


    return;
}