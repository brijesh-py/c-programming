#include <stdio.h>

void main()
{
    // voting age checker
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    /* The code snippet you provided is checking the value of the variable `age`. If the value of `age` is
    greater than or equal to 18, it will print "You are eligible to vote.". Otherwise, if the value of
    `age` is less than 18, it will print "You are not eligible to vote.". This code is determining
    whether a person is eligible to vote based on their age. */
    
    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }
}