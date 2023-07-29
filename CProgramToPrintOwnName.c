// C program to print own name using scanf()
#include <stdio.h>
int main()
{
    char name[100];

    printf("Enter your name: ");
    // user input will be taken here
    scanf("%s", name);

    printf("Your name is %s", name);

    return 0;
}