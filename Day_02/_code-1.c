// Write a program to Find sum of digits of a number.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number-\n");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; n > 0; i++)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        printf("The sum of digit of a number is %d\n", sum);
    }
    else if (n < 0)
    {
        n = -n;
        for (int i = 0; n > 0; i++)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        printf("The sum of digit of a number is %d\n", sum);
    }
    else
    {
        printf("The sum of digit of a number is 0\n");
    }
    return 0;
}