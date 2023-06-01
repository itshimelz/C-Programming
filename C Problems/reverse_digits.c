#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;

    while (temp > 0)
    {
        number = temp % 10;
        temp = temp / 10;
        printf("%d", number);
    }

    return 0;
}
