//Write a C program to count how many even and odd numbers are present in an array using functions.
#include <stdio.h>
int countEven(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            count++;
    }
    return count;
}

// Function to count odd numbers
int countOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even = countEven(arr, n);
    int odd = countOdd(arr, n);

    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d\n", odd);

    return 0;
}