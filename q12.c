#include <stdio.h>
#include <math.h> 


int main() {
    int num, i;
    int is_prime = 1; // Flag: 1 means true (it is prime), 0 means false

    // 1. Prompt and read input
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // 2. Handle edge cases: 1 is not prime, 2 and 3 are prime.
    if (num == 1) {
        is_prime = 0; // 1 is defined as not prime
    } else if (num == 2) {
        // 2 is the only even prime number. We can start the loop from 3.
        is_prime = 1; 
    } else if (num % 2 == 0) {
        is_prime = 0; // Any other even number is not prime
    } else {
        .
        
        int limit = (int)sqrt(num);

        
        for (i = 3; i <= limit; i += 2) {
            if (num % i == 0) {
                is_prime = 0; 
        }
    }

    
    if (is_prime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
