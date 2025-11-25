//Define a union called Data that contains the following members:
//int i;
//float f;
//char str[20];
//Write a program to:
//Assign values to each member of the union one by one.
//Print all members after each assignment.
#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;  // Create a union variable

    // Give value to integer
    d.i = 10;
    printf("After giving integer value:\n");
    printf("i = %d\n", d.i);
    printf("f = %f\n", d.f);
    printf("str = %s\n\n", d.str);

    // Give value to float
    d.f = 25.5;
    printf("After giving float value:\n");
    printf("i = %d\n", d.i);
    printf("f = %f\n", d.f);
    printf("str = %s\n\n", d.str);

    // Give value to string
    sprintf(d.str, "Hello");
    printf("After giving string value:\n");
    printf("i = %d\n", d.i);
    printf("f = %f\n", d.f);
    printf("str = %s\n", d.str);

    return 0;
}