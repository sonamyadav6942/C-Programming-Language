
// C program to find the size of int, char, float and double data types

#include <stdio.h>
int main() {

    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // Calculate and Print the size of integer type
    printf("Size of int: %zu bytes\n", sizeof(int));

    // Calculate and Print the size of floatType
    printf("Size of float: %zu bytes\n", sizeof(float));

    // Calculate and Print the size of doubleType
    printf("Size of double: %zu bytes\n", sizeof(double));

    // Calculate and Print the size of charType
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}
