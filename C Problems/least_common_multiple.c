#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);

    printf("The LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function to find the Least Common Multiple (LCM)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// Function to find the Greatest Common Divisor (GCD)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
