#include <stdio.h>
#include <string.h>

// Syntax:
/*
    struct MyStructure
    {                 // Structure declaration
        int myNum;    // Member (int variable)
        char myName; // Member (char variable)
    }; // End the structure with a semicolon
*/

void main()
{
    // create structure
    struct Person
    {
        char name[20];
        int age;
    };

    // create struct variable of Person is called p1
    // 1st Person details
    struct Person p1;
    // add menber data
    strcpy(p1.name, "John");
    p1.age = 23;
    // access data from member
    printf("Name: %s and Age: %d", p1.name, p1.age);

    // 2nd Person details
    struct Person p2 = {
        "Doe",
        20,
    };
    // access data from member
    printf("\nName: %s and Age: %d", p2.name, p2.age);

    return;
}