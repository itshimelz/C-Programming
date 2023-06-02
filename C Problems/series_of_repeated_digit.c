#include <stdio.h>

int calculateSeriesSum(int n) {
    int term = 1; // First term of the series
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += term;
        term = term * 10 + 1;
    }

    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int seriesSum = calculateSeriesSum(n);
    printf("Sum of the series: %d\n", seriesSum);

    return 0;
}
