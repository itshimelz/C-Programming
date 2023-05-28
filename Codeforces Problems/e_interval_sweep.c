
#include <stdio.h>
int main()
{
    int a, b;
    int oddCount = 0;
    int evenCount = 0;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("NO");
        return 0;
    }
    if ((a == 0 && b > 0) || (a > 0 && b == 0))
    {
        printf("NO");
        return 0;
    }
    for (int i = 1; ; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
        if (oddCount == a && evenCount == b)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");

    return 0;
}
