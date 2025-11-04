//Write a C program to read a string from the user and print it in reverse order using a character array

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (stops at space)

    length = strlen(str);  // Find length of the string

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}