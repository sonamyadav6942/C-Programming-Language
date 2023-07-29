// C Program to convert Fahrenheit to Celsius

#include <stdio.h>
int main() {
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}