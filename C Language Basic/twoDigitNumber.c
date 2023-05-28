#include <stdio.h>

int main()
{
    int num;
    printf("enter your number: ");
    scanf("%d", &num);

    if (num > 9 && num < 100)
    {
        printf("This number %d is a Two Digit Number.", num);
    }
    else
    {
        printf("This number %d is not a Two Digit Number.", num);
    }

    return 0;
}