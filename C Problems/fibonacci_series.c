#include <stdio.h>

void printFibonacciSeries(int limit) {
    int prev = 0; // Previous term
    int curr = 1; // Current term

    printf("Fibonacci series up to %d:\n", limit);
    printf("%d ", prev);

    while (curr <= limit) {
        printf("%d ", curr);

        // Calculate the next term
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("\n");
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printFibonacciSeries(limit);

    return 0;
}
