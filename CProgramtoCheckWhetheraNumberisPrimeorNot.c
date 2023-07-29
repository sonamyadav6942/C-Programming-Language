// Prime numbers are natural numbers that are divisible by only 1 and the number itself
// C Program to check for prime number
#include <stdio.h>
int main()
{
    int i, num, count = 0;
    
    // Taking input from user
    printf("Enter a number to check whether a number is prime or not: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count ++;
        }
    }
    if(count == 2)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    
    return 0;
}

