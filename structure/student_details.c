#include <stdio.h>
#define SUBJECT_COUNT 7
#define SUBJECT_LENGTH 50
#define STUDENT_COUNT 3

// Structure to represent subjects
struct Subjects
{
    char sub[SUBJECT_COUNT][SUBJECT_LENGTH];
};

// Structure to represent Student
struct Student
{
    char name[50];
    int rollNo;
    char branch[20];
    struct Subjects subjects;
};

// Function to display student details
void display_student(struct Student student)
{
    printf("Name: %s\nBranch: %s\nRollNo: %d\nSubjects: ", student.name, student.branch, student.rollNo);
    for (int i = 0; i < SUBJECT_COUNT; i++)
    {
        printf(" %s", student.subjects.sub[i]);
    }
    printf("\n\n");

    return;
}

void main()
{
    printf("Student Details\n\n");

    // Initialize student details
    struct Student students[STUDENT_COUNT] =
        {
            {"Honey", 20023, "IT", {"Math", "Physics", "Chemistry"}},
            {"John", 40334, "IT", {"Math", "Physics", "BEE", "M&A"}},
            {"Mira", 30000, "CSE", {"Math", "Physics", "SCA", "BEE", "OAT"}},
        };

    // Display details of each student
    for (int i = 0; i < STUDENT_COUNT; i++)
    {
        display_student(students[i]);
    }
    /*
        honey student details
        struct Student honey = {
            "Honey",
            1001,
            "IT",
            {
                "Math",
                "English",
                "BEE",
                "M&A",
                "Physics",
                "CProgramming",
            },
        };
        // access honey student details
        printf("Name: %s\nRollNo: %d\nBranch: %s\nSubjects:", honey.name, honey.rollNo, honey.branch);
        for (int i = 0; i < subject; i++)
        {
            printf(" %s,", honey.subjects.sub[i]);
        }

        // john student details
        struct Student john = {
            "John",
            2300,
            "CSE",
            {
                "Math",
                "CS",
                "TD",
                "FCIT",
                "Physics",
                "Chemistry",
            },
        };
        // access john student details
        printf("\n\nName: %s\nRollNo: %d\nBranch: %s\nSubjects:", john.name, john.rollNo, john.branch);
        for (int i = 0; i < subject; i++)
        {
            printf(" %s,", john.subjects.sub[i]);
        }

        // mira student details
        struct Student mira = {
            "Mira",
            3456,
            "CSE",
            {
                "Math",
                "CS",
                "TD",
                "FCIT",
                "Physics",
                "Chemistry",
            },
        };
        // access mira student details
        printf("\n\nName: %s\nRollNo: %d\nBranch: %s\nSubjects:", mira.name, mira.rollNo, mira.branch);
        for (int i = 0; i < subject; i++)
        {
            printf(" %s,", mira.subjects.sub[i]);
        }
    */
    return;
}