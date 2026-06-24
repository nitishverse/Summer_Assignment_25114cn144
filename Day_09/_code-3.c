/*
Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE
*/
#include <stdio.h>

int main()
{
    for (char i = 65; i <= 70; i++)
    {
        for (char j = 65; j <= i ; j++)
        {
            printf("%c", i);
        }

        printf("\n");
    }

    return 0;
}