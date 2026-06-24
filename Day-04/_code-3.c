// Write a program to Check Armstrong number.
#include <stdio.h>

int main()
{
    int n, r, sum = 0, fact = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int temp = n;
    while (fact > 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
        if (temp == 0)
        {
            fact = 0;
        }
    }
    if (n == sum)
    {
        printf("The entered number is Armstrong number.\n");
    }
    else
    {
        printf("The entered number is not Armstrong number.\n");
    }
    return 0;
}