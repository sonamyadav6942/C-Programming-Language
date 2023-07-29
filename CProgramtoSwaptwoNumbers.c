// C program to swap two variables

#include <stdio.h>

// Driver code

int main()
{
    int first , second, temp;
    
    // Taking input from users
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    
    printf("Before swapping first number is %d and second number is %d\n", first, second);
    
    temp = first;
    first = second;
    second = temp;
    

    printf("After swapping first number is %d and second number is %d", first, second);

    return 0;
}