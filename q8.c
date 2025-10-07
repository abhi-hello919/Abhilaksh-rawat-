//Write a C program to take a person’s age as input and check if they are eligible to vote.
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible to vote.\n");
    } else {
        if (age < 0) {
            printf("Invalid age.\n");
        } else {
            printf("Not eligible to vote.\n");
        }
    }

    return 0;
}
