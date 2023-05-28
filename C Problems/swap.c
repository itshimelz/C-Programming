#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    // Find the number of digits in n
    int digits = 0;
    int temp = number;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Find the power of 10 that is equal to the number of digits
    int power = 1;
    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    // Find the first and last digits of n
    int first = number / power;
    int last = number % 10;

    // Swap the first and last digits of n
    number = number - first * power + last * power;

    // Replace the first digit with the last digit
    number = number - last + first;

    // Print the modified n
    printf("%d\n", number);

    return 0;
}
