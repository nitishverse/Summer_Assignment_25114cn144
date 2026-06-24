// Write a program to Find LCM of two numbers.
#include <stdio.h>

int main()
{
    int a, b, lcm, c = 1;
    printf("Enter the number a and b :\n");
    scanf("%d%d", &a, &b);
    lcm = a > b ? a : b;
    while (c > 0)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("The Lowest Common Multiple of %d and %d is %d\n", a, b, lcm);
            c = 0;
        }
        lcm++;
    }
    return 0;
}
