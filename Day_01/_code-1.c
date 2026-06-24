// Write a program to Calculate sum of first N natural numbers.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number to be sum calculated-\n");
    scanf("%d", &n);
    for (int i = 0; n >= i; i++)
    {
        sum = sum + i;
    }
    printf("Sum of First %d natural number is %d", n, sum);

    return 0;
}
