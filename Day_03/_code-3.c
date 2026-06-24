// Write a program to Find GCD of two numbers
#include <stdio.h>
int GCD(int, int);    // Function Prototype
int GCD(int x, int y) // Function Definition
{
    int gcd;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}
int main()
{
    int a, b, gcd;
    printf("Enter the number a and b :\n");
    scanf("%d%d", &a, &b);
    gcd = GCD(a, b); // Function Call
    printf("The Greatest Common Factor of %d and %d is %d\n", a, b, gcd);
    return 0;
}