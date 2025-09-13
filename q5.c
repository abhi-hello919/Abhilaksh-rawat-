// ⁠WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
#include <stdio.h>
void main(){
    float c,f;
    printf("Enter Temperature in celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit is: %.2f",f);
}