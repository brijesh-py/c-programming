#include <stdio.h>

void main()
{
    // file handling
    // syntax

    // FILE <*fptr>;

    // modes
    // w - Writes to a file
    // a - Appends new data to a file
    // r - Reads from a file

    // create
    // fptr = <fopen(filename, mode)>; // open file

    // write
    // <fprintf(fptr, "Hello, World!")>; // write to file

    // read
    // char str[];
    // <fgets(str, 20, fptr)>; // read from file
    // printf("%s", str);

    //<fclose(fptr);> // close file

    // example 1
    // Create a file
    FILE *fp = fopen("hello.txt", "w"); // open file
    fprintf(fp, "Hello, World!");       // write to file
    fclose(fp);                         // close file

    // example 2
    FILE *fp2 = fopen("hello.txt", "r"); // open file
    char str[100];
    fgets(str, 100, fp2); // read from file
    printf("%s", str);
    fclose(fp2);

}