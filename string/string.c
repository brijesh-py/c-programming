#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Programming Language";
    // calculate the length of the string
    // method -1
    int length;
    for (int i = 0; !str[i] == '\0'; i++)
    {
        length++;
    }
    printf("Print of the length of the string: %d\n", length); // 20 excluding \0
    // method -2
    printf("Print of the length of the string: %d\n", sizeof(str)); // 21 including \0

    char str2[10];
    printf("Enter String (str2): ");
    fgets(str2, sizeof(str2), stdin); // get string from user on console
    puts(str2); // string function

    char str3[100];
    printf("\nEnter String (str3): ");
    fgets(str3, sizeof(str3), stdin);
    printf("%s",str3);
    return;
}