#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int originalNumber = number;

    // Extract the last digit
    int lastDigit = number % 10;

    // Determine the number of digits
    int digitCount = 0;
    int temp = number;

    while (temp != 0)
    {
        temp /= 10;
        digitCount++;
    }

    // Calculate the value of the first digit
    int firstDigit = (int) (number / pow(10, digitCount - 1));

    // Calculate the swapped number
    int swappedNum = lastDigit;
    swappedNum = swappedNum * (int)round(pow(10, digitCount - 1));
    swappedNum = swappedNum + number % ((int)round(pow(10, digitCount - 1)));
    swappedNum = swappedNum - lastDigit;
    swappedNum = swappedNum + firstDigit;

    // // Print the original number, first and last digits
    // printf("Original Number: %d\n", number);
    // printf("First Digit: %d\n", firstDigit);
    // printf("Last Digit: %d\n", lastDigit);

    // Print the swapped number
    printf("Swapped Number: %d\n", swappedNum);

    return 0;
}