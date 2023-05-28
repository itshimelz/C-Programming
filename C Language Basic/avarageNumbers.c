#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;

    printf("enter a number: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    sum = num1 + num2 + num3;
    printf("Your answare is %d", sum);

    return 0;
}