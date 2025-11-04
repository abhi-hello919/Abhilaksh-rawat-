//Write a recursive function in C to find the factorial of a given number.
#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n <= 1) return 1ULL;
    return (unsigned long long)n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 1;
    }
    if (n > 20) { 
        printf("Number too large. Please enter a value between 0 and 20.\n");
        return 1;
    }

    unsigned long long result = factorial((unsigned int)n);
    printf("%d! = %llu\n", n, result);
    return 0;
}