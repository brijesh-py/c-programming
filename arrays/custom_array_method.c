#include <stdio.h>
#define SUCCESS 0
#define ERROR -1
#define Invalid_Index -1

// ['append', 'clear', 'copy', 'count', 'extend', 'index', 'insert', 'pop', 'remove', 'reverse', 'sort']

// get size method
int sizeOf(int *ptr)
{
    return sizeof(ptr) / sizeof(ptr[0]);
}

// append method
int append(int *ptr, int item)
{
    int size = sizeof(ptr) / sizeof(ptr[0]);
    ptr[size + 1] = item;
    if (ptr[size + 1] == item)
        return 0;
    else
        return -1;
    return 0;
}

// clear method
int clear(int *ptr)
{
    for (int i = 0; i < sizeOf(ptr); i++)
    {
        ptr[i] = 0;
    }
}

// insert method
int insert(int *ptr, int index, int item)
{
    ptr[index] = item;
    if (ptr[index] == item)
        return 0;
    else
        return -1;
}

// index method
int indexOf(int *ptr, int item)
{
    for (int i = 0; i <= sizeOf(ptr); i++)
    {
        if (ptr[i] == item)
            return i;
        else
            return -1;
    }
}


void main()
{
    // append
    int arr1[] = {1, 2, 4, 7, 0, 6, 7};
    int *ptr;
    ptr = arr1;
    // append(arr1, 10);
    // clear(arr1);
    // insert(arr1, 3, 10);
    // int ind = indexOf(arr1, 4);
    printf("Length: %d\n", pop(arr1));
    // printf("Update Array: %d %d\n", pop(arr1), arr1[1]);
    // printf("Update Array: %d %d\n", pop(arr1), arr1[2]);
    // printf("Update Array: %d %d\n", pop(arr1), arr1[3]);
    // printf("Update Array: %d %d\n", pop(arr1), arr1[4]);
    // printf("Update Array: %d %d\n", pop(arr1), arr1[5]);

    int numbers[] = {10, 20, 30, 40, 50};
    int array_length = sizeof(&numbers);
    printf("The length of the 'numbers' array is: %d\n", array_length);
    return;
}