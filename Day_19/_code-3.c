// Write a program to Transpose matrix.
#include <stdio.h>

int main()
{
    int A[3][3], B[3][3];
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
            B[j][i] = A[i][j];
        }
    }
    printf("The Transpose of entered Array is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}