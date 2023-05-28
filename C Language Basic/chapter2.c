#include <stdio.h>

// A program to check a number is divisible by 2 or not
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}