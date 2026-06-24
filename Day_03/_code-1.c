// Write a program to Check whether a number is prime
#include <stdio.h>

int main()
{
    int n, r, count = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("The nuber is not prime\n");
    }
    else if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            r = n % i;
            if (r == 0)
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            printf("The number is not a prime\n");
        }
        else
        {
            printf("The number is prime\n");
        }
    }

    return 0;
}