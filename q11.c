//Write a program in C to calculate the sum of the first n natural numbers using a for loop
#include <stdio.h>

/
int main() {
    
    int n;
    
    long long sum = 0;
    int i;
    printf("Enter a positive integer (n): ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    
    for (i = 1; i <= n; i++) {
        
        sum += i; /
    }

    
    printf("The sum of the first %d natural numbers is: %lld\n", n, sum);

    
    
    return 0; 
}
