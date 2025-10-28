//Write a C program to add two numbers, take number from user and print the sum
#include <stdio.h>

int main() {
    int a   ,b , sum;// first number   // second number
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;  // add the two numbers

    printf("The sum is: %d", sum);

    return 0;
}