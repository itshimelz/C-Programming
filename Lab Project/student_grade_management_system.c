#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 3
#define MAX_STUDENTS 6
#define MAX_NAME_LENGTH 50

// Structure to represent a student
typedef struct
{
    char name[MAX_NAME_LENGTH];
    int studentID;
    int grades[MAX_COURSES];
} Student;

// Function to add a new student
void addStudent(Student students[], int *numStudents)
{
    if (*numStudents == MAX_STUDENTS)
    {
        printf("Maximum number of students reached.\n");
        return;
    }

    Student newStudent;

    printf("Enter student name: ");
    scanf("%s", newStudent.name);

    printf("Enter student ID: ");
    scanf("%d", &newStudent.studentID);

    students[*numStudents] = newStudent;
    (*numStudents)++;

    printf("Student added successfully.\n");
}

// Function to enter grades for a student
void enterGrades(Student students[], int numStudents)
{
    int studentID;
    int courseIndex;
    int grade;

    printf("Enter student ID: ");
    scanf("%d", &studentID);

    int studentIndex = -1;

    // Find the student with the given ID
    for (int i = 0; i < numStudents; i++)
    {
        if (students[i].studentID == studentID)
        {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex == -1)
    {
        printf("Student not found.\n");
        return;
    }

    printf("Enter course index: ");
    scanf("%d", &courseIndex);

    if (courseIndex < 0 || courseIndex >= MAX_COURSES)
    {
        printf("Invalid course index.\n");
        return;
    }

    printf("Enter grade: ");
    scanf("%d", &grade);

    students[studentIndex].grades[courseIndex] = grade;

    printf("Grade entered successfully.\n");
}

// Function to calculate the GPA for a student
void calculateGPA(Student students[], int numStudents)
{
    int studentID;

    printf("Enter student ID: ");
    scanf("%d", &studentID);

    int studentIndex = -1;

    // Find the student with the given ID
    for (int i = 0; i < numStudents; i++)
    {
        if (students[i].studentID == studentID)
        {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex == -1)
    {
        printf("Student not found.\n");
        return;
    }

    // Calculate GPA based on grades and credit hours

    float totalCreditHours = 0.0;
    float gradePoints = 0.0;

    // Calculate the total grade points and credit hours
    for (int i = 0; i < MAX_COURSES; i++)
    {
        int grade = students[studentIndex].grades[i];

        // Assuming grade scale: A=4, B=3, C=2, D=1, F=0
        float creditHours = 3.0; // Example: All courses have 3 credit hours

        gradePoints += grade * creditHours;
        totalCreditHours += creditHours;
    }

    if (totalCreditHours > 0)
    {
        float gpa = gradePoints / totalCreditHours;
        printf("GPA: %.2f\n", gpa);
    }
    else
    {
        printf("No credit hours found.\n");
    }

    printf("GPA calculated successfully.\n");
}

int main()
{
    Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do
    {
        printf("\n--- Student Grade Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Enter Grades\n");
        printf("3. Calculate GPA\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students, &numStudents);
            break;
        case 2:
            enterGrades(students, numStudents);
            break;
        case 3:
            calculateGPA(students, numStudents);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
