#include <stdio.h>
#include <string.h>

void main()
{
    // strings in c are arrays of characters and are enclosed in double quotes

    char str[] = "Hello World";
    printf("%s", str);
    printf("\n %c \n", str[4]);

    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("%c\n", carName[i]);
    }

    // another way of creating strings
    char carName2[] = {'V', 'o', 'l', 'v', 'o'};
    printf("\n\n%s\n", carName2);
    printf("%d", sizeof(carName2));

    // real world example
    char fname[] = "John Doe";
    char message[] = "Good to see you,";

    printf("\n \n%s %s!", message, fname);

    //  get the length of a string, you can use the strlen() function
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));

    // It is also important that you know that sizeof will always return the memory size (in bytes), and not the actual string length.
    char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", sizeof(alphabet)); // 50

    // To concatenate (combine) two strings, you can use the strcat() function
    char str1[20] = "Hello ";
    char str2[] = "World!";
    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);
    // Print str1
    printf("%s", str1);

    // To copy the value of one string to another, you can use the strcpy() function
    char str3[20] = "Hello World!";
    char str4[20];
    // Copy str1 to str2
    strcpy(str3, str4);
    // Print str2
    printf("%s", str4);

    // To compare two strings, you can use the strcmp() function. It returns 0 if the two strings are equal, otherwise a value that is not 0
    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";
    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str5, str6)); // Returns 0 (the strings are equal)
    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str5, str7)); // Returns -4 (the strings are not equal)
}