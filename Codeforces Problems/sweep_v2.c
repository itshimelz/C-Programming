#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("NO\n");
        return 0;
    }

    if ((a == 0 && b > 0) || (a > 0 && b == 0))
    {
        printf("NO\n");
        return 0;
    }

    // Check if the absolute difference between 'a' and 'b' is at most 1
    if (a == b || a == b + 1 || a + 1 == b)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}