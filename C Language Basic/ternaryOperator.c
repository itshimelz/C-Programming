#include <stdio.h>
int main()
{
    float b, h, a;

    printf("Enter the base of the parallelogram: ");
    scanf("%f", &b);

    printf("Enter the height of the parallelogram:  ");
    scanf("%f", &h);

    a = b * h;

    printf("The area of the parallelogram is:   %.2f\n",  a);
    return 0;
}

