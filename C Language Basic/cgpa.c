#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, total_number, cgpa;
    float gpa = 3.0;

    printf("Enter your grades: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    total_number = sub1 + sub2 + sub3;

    cgpa = total_number / gpa;

    printf("Your CGPA is %f", cgpa);
    return 0;
}
