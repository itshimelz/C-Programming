#include <stdio.h>

int sum(int n);
int main()
{
    printf("Sum of n is: %d", sum(5));
    return 0;
}

// Recursion function

int sum(int n)
{

    if (n == 1){
        return 1;
    }

    int sumNm1 = sum(n - 1); //From this line 'sum' function will call again the 'sum' function with new 'n' value.
    int sumN = sumNm1 + n;
    return sumN;
}