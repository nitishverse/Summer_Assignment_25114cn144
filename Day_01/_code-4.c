// Write a program to Count digits in a number
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number to be digit count-\n");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 0; n > 0; i++)
        {
            n = n / 10;
        }
        printf("The number of digit in a number is %d", i);
    }
    else if (n < 0)
    {
        n = -n;
        for (i = 0; n > 0; i++)
        {
            n = n / 10;
        }
        printf("The number of digit in a number is %d", i);
    }
    else if (n == 0)
    {
        printf("The number of digit in a number is 1\n");
    }

    return 0;
}