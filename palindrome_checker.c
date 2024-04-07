#include <stdio.h>
// /* `#include <string.h>` is a preprocessor directive in C that includes the standard C library header
// file `string.h`. This header file provides various functions for manipulating strings in C, such as
// `strlen`, `strcpy`, `strcat`, `strcmp`, and more. */
#include <string.h>

int main()
{
    printf("Palindrome Checker \n");
    char string[100];

    /* The ` ` in the `scanf` function is used to consume any leading whitespace characters
    (like spaces, tabs, newlines) in the input stream before reading the actual input. This
    helps in skipping any whitespace characters that might be present in the input buffer
    before reading the string. It ensures that the `scanf` function reads the input string
    without any leading whitespace characters. */
    printf("Enter a string: ");
    scanf("%s", string);

    /* `strlen` is a standard library function in C that is used to
find the length of a null-terminated string. It takes a pointer
to a null-terminated string as its argument and returns the
number of characters in that string excluding the null
terminator. */
    printf("%b", string[0] == string[strlen(string) - 1]);
    return 0;
}