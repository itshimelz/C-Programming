#include <stdio.h>

int main()
{
    int fact, n, i;
    scanf("%d", &n);
    i = 1;
    fact = 1;
    for (i; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial is %d", fact);
    return 0;
}