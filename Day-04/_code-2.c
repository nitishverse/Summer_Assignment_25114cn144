// Write a program to Find nth Fibonacci term.
#include <stdio.h>

int main()
{
    int a = 0, b = 1, x, y, n, z;
    printf("Enter the number at which fibonacci series print :\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("The Fibonacci series at %dth term is %d\n", n, a);
    }
    else if (n == 2)
    {
        printf("The Fibonacci series at %dth term is %d\n", n, b);
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            x = a;
            y = b;
            z = x + y;
            a = y;
            b = z;
            if (i == n)
            {
                printf("The Fibonacci series at %dth term is %d\n", n, z);
            }
        }
    }
    return 0;
}