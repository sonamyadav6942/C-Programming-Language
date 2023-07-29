// C program to add two numbers
#include <stdio.h>
int main()
{
    int first, second, sum;

    // Ask user to enter the two numbers
    printf("Enter two integer number\n");

    scanf("%d %d", &first, &second);

    sum = first + second;

    printf("Sum of first and second number is %d", sum);
    return 0;

}