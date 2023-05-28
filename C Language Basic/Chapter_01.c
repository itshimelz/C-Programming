#include <stdio.h>

int main()
{

    // Code for making a fibonacci series on C Program

    int num1 = 0, num2 = 1, i, sum, n = 10;

    printf("Enter a number for making a Fibonacci Series by that number \n");
    printf("You entered number ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = num1 + num2;
        printf("%d \n", sum);
        num1 = num2;
        num2 = sum;
    }

    printf("This is a Fibonacci Series for number %d", n);
    return 0;
}