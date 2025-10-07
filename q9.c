//Write a C program that takes a number (1–7) as input and prints the corresponding day of the week using a switch case.

#include <stdio.h>

int main() {
    int day_number;

    
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day_number);

    
    switch (day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
