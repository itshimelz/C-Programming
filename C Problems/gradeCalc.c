#include <stdio.h>

int main()
{
    int number;
    int result;

    printf("Enter your number: ");
    result = scanf("%d", &number);

    if (result != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (number >= 80)
    {
        printf("You got A+\n");
    }
    else if (number >= 70)
    {
        printf("You got A\n");
    }
    else if (number >= 60)
    {
        printf("You got A-\n");
    }
    else if (number >= 50)
    {
        printf("You got B\n");
    }
    else if (number >= 40)
    {
        printf("You got D\n");
    }
    else
    {
        printf("You got FAILED\n");
    }

    return 0;
}
