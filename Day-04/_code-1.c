// Write a program to Generate Fibonacci series
#include <stdio.h>

int main()
{
    int a = 0, b = 1, x, y, z;
    for (int i = 0; i < 7; i++)
    {
        printf("%d,", a);
        x = a;
        y = b;
        z = a + b;
        a = b;
        b = z;
    }

    return 0;
}