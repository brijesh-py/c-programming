#include <stdio.h>
#include <string.h>

void main()
{
    printf("Stirng or Characters functions\n");
    // Function =>
    char str[20] = "John Smith";
    printf("String Length: %d", strlen(str)); // strlen(variable)

    char str2[20];
    strcpy(str2, str); // strcpy(destination_variable, source_variable)
    printf("\n%s", str2);

    char str3[] = "hello world";
    char str4[] = "world";
    printf("\n%d", strcmp(str3, str)); // strcmp(1_variable, 2_variable)
   


    return;
}