// Simple Interest Program in C
#include <stdio.h>

// Driver code
int main()
{
	// We can change values here for different inputs
	float P, R, T;

    printf("Enter P, R and T: ");
    scanf("%F %f %f", &P, &R, &T);
    
    // Calculate simple interest
	float SI = (P * T * R) / 100;

	// Print Simple Interest
	printf("Simple Interest = %f\n", SI);

	return 0;
}
