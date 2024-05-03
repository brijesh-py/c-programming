#include <stdio.h>

void main()
{
    // syntax :
    // data_type array_variable[size of array] = {value1, value2, ...};

    // static initialization
    int numbers[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // one dimensional array
    int number2[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};    // two dimensional array
    int number3[2][3][2] = {{{0, 1}, {2, 3}, {4, 5}}, {{6, 7}, {8, 9}, {10, 11}}};  // three dimensional array
    int number5[2][3][3][2] = {{{{0, 1}, {2, 3}, {4, 5}}, {{6, 7}, {8, 9}, {10, 11}}, {{12, 13}, {14, 15}, {16, 17}}}, {{{18, 19}, {20, 21}, {22, 23}}, {{24, 25}, {26, 27}, {28, 29}}, {{30, 31}, {32, 33}, {34, 35}}}}; // multi dimensional array

    // access value from array
    printf("%d\n", numbers[0]); //0 array_variable[index_of_array]
    printf("%d\n", number2[0][0]); //0
    printf("%d\n", number3[0][0][0]); //0
    printf("%d\n", number5[0][0][0][0]);//0


    return;
}