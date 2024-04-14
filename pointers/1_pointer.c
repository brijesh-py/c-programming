#include <stdio.h>

void main(){
    // pointer is a variable that stores the address of another variable and is used to access the value of that variable, it is used to store the address of a variable

    // syntax
    // int *ptr;

    int a = 10;
    int *ptr = &a;

    printf("%d", *ptr);
}