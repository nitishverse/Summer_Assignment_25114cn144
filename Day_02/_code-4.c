// Write a program to Check whether a number is palindrome.
#include <stdio.h>

int main()
{
    int n, reverse = 0;
    printf("Enter the number-\n");
    scanf("%d", &n);
    int temp = n;
    if (n > 0)
    {

        for (int i = 0; temp > 0; i++)
        {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        if (n == reverse)
        {
            printf("The entered number is Palindrome\n");
        }
        else
        {
            printf("It is not palindrome number\n");
        }
    }
    else if (n < 0)
    {
        printf("it is not palindrome\n");
    }
    else if (n == 0)
    {
        printf("The entered number is Palindrome\n");
    }
    return 0;
}