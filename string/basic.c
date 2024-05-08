#include <stdio.h>

void main()
{
    // String or characters in c collection of characters
    // A string literal in C is a sequence of chars, terminated by a literal zero
    printf("\"String or Characters\"\n");
    /*
    C programming language, char *is a pointer type that is used to refer to a sequence of characters in memory, typically representing a string.

    The char data type represents a single character.
    The * symbol indicates a pointer, which is a variable that holds the memory address of another variable.
    So, char* denotes a pointer to a character, or a pointer to the first element of an array of characters, which is often used to represent strings in these languages.
    */
    // str is a pointer to the first character of the string "Hello, world!".
    char *str = "Hello, world!";
    /* string literals can be used to initialize arrays */
    char a1[] = "Mira";  // a1 is char[4] holding {'M','i','r','a','\0'}
    char a2[5] = "Mira"; // same as a1
    char a3[5] = "Mira"; /* a1 is char[4] holding {'M','i','r', 'a'}, missing the '\0' */
    char a4[4] = "Mira";
    // str[0] = 'M'; // terminated by signal SIGSEGV (Address boundary error)
    /* it's good practice to denote string literals as such, by using `const` */
    char const *s1 = "foobar";
    // s1[0] = 'F'; // assignment of read-only location ‘*s1’
    char str1[] = {'H', 'E', 'L', 'L', 'O', '\0'}; // \0 is string terminator

    printf("%s\n", a1); // mira
    printf("%s\n", a2); // Mira
    printf("%s\n", a3); // Mira
    printf("%s\n", a4); // MiraMira
    printf("%s\n", s1); // foobar
    printf("%s", str1);

    return;
}