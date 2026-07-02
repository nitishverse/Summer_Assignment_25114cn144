// Write a program to Find diagonal sum.
#include <stdio.h>

int main()
{
    int A[3][3], sum = 0;
    printf("Enter the First Array :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += A[i][j];
            }
        }
    }
    printf("THe Sum of Diagonal element is %d\n", sum);
    return 0;
}