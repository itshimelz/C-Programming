#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char word[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);

        int lenght = 0;
        while (word[lenght] != '\0')
        {
            lenght++;
        }

        if (lenght > 10)
        {
            printf("%c%d%c\n", word[0], lenght - 2, word[lenght - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}