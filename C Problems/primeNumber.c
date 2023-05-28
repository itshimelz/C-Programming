#include <stdio.h>

int main() {
    int num, isPrime = 0, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime++;
            break;
        }
    }

    if (isPrime == 0 && num > 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
