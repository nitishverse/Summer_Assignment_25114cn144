// Write a program to Print prime numbers in a range.
#include <stdio.h>

int main()
{
    int s, e, r, count = 0;
    printf("Enter the starting and ending of range :\n");
    scanf("%d%d", &s, &e);
    if (s < 0 || e < 0)
    {
        printf("negative number are not prime\n");
    }
    else
    {
        for (int i = s; (i <= e && s <= e); i++)
        {
            if (i == 1)
            {
                printf("1 is not a prime number.\n");
            }
            else
            {
                for (int j = 2; j < i; j++)
                {
                    r = i % j;
                    if (r == 0)
                    {
                        count++;
                        break;
                    }
                }
            }
            if (count == 0 && i != 1)
            {
                printf("the number %d in a range  is prime\n", i);
            }
            count = 0;
        }
    }
    return 0;
}