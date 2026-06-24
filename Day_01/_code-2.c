// Write a program to Print multiplication table of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number-");
    scanf("%d", &n);
    for (int i = 1; 10 >= i; i++)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }
    return 0;
}