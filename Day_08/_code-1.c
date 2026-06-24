// Write a program to Print half pyramid pattern.
#include <stdio.h>

int main()
{

    for (int i = 0; i <= 7; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}