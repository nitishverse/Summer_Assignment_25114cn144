// Write a program to Find product of digits.
#include <stdio.h>

int main()
{
    int n, product = 1;
    printf("Enter the number-\n");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; n > 0; i++)
        {
            product = product * (n % 10);
            n = n / 10;
        }
        printf("The Product of a digit of a number is %d", product);
    }
    else if (n < 0)
    {
        n = -n;
        for (int i = 0; n > 0; i++)
        {
            product = product * (n % 10);
            n = n / 10;
        }
        printf("The Product of a digit of a number is %d", product);
    }
    else
    {
        printf("The Product of a digit of a number is 0\n");
    }
    return 0;
}