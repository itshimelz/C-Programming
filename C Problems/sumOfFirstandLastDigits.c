#include <stdio.h>
int main()
{
    int number, digits = 0, firstDigit, lastDigit;
    int power = 1;

    printf("Enter number: ");
    scanf("%d", &number);

    int temp = number;

    while (temp > 0)
    {
        number = temp % 10;
        digits++;
        temp = temp / 10;

        if (digits == 1)
        {
            lastDigit = number;
        }
        else if (temp == 0)
        {
            firstDigit = number;
        }
    }

    // for (int i = 1; i < digits; i++)
    // {
    //     power = power * 10;
    // }

    // firstDigit = number / power;
    // lastDigit = number % 10;

    int sum = firstDigit + lastDigit;
    printf("%d", sum);

    return 0;
}
