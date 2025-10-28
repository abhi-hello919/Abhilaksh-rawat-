//Write a program in C to calculate the sum of the first n natural numbers using a for loop
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
