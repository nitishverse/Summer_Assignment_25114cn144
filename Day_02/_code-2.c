// Write a program to Reverse a number.
#include <stdio.h>

int main()
{
    int n, Reverse = 0;
    printf("Enter the number-\n");
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;

        for (int i = 0; n > 0; i++)
        {
            Reverse = (Reverse * 10) + n % 10;
            n = n / 10;
        }
        printf("The Reverse of a number is %d \n", -Reverse);
    }
    else if (n > 0)
    {

        for (int i = 0; n > 0; i++)
        {
            Reverse = (Reverse * 10) + n % 10;
            n = n / 10;
        }
        printf("The Reverse of a number is %d \n", Reverse);
    }
    else
    {
        printf("The Reverse of a number is 0\n");
    }
    return 0;
}