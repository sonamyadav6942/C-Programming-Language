
// C program to demonstrate the area and perimeter of rectangle

#include <stdio.h>
int main()
{
    float area, perimeter, length, breadth;

    printf("Enter the length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = (length + breadth);

    perimeter = 2 * (length + breadth);

    printf("Area and Perimeter of Rectangle is %f and %f", area, perimeter);
    return 0; 
}