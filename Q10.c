//Write a C program that takes an integer input and uses the bitwise AND (&) operator along with a ternary operator to check whether the number is even or odd.
#include <stdio.h>
int main ()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    (num & 1)?printf("number is odd"):printf("number is even");
    return 0;
}