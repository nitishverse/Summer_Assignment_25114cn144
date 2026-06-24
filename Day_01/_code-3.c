// Write a program to Find factorial of a number
#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter the number-");
    scanf("%d", &n);
    if (n == 0)
    {
        printf(" The factorial of 0 is 1\n");
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        printf("%d\n", fact);
    }

    return 0;
}