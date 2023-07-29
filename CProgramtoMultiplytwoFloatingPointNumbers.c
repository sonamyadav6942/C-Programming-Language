// C program to multiply two floating point numbers

#include <stdio.h>

// Driver code
int main()
{
    float first, second, multiply;
    
    // Ask input to user
    printf("Enter two floating point number: ");
    scanf("%f %f", &first, &second);

     // Calculate the multiplication of first and second using '*' operator
    multiply = first * second;
    printf("Multiplication of two floating point number is %f", multiply);
    
    return 0;
}