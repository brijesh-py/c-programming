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
}