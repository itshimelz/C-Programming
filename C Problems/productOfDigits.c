#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    int product = 1;

    while (temp > 0)
    {
        number = temp % 10;
        product = number * product;
        temp = temp / 10;
    }

    printf("%d", product);

    return 0;
}
