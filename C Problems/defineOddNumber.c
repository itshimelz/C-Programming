#include <stdio.h>

int main()
{

    int n;
    printf("Enter your desire number:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\nThis number %d is not an odd number.\n", n);
    }
    else
    {
        printf("\nThis number %d is an odd number.\n", n);
    }

    return 0;
}