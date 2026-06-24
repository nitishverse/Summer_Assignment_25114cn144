// Write a program to Input and display array.
#include <stdio.h>

int main()
{
    int A[5];
    printf("Enter the array :\n");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &A[i]);
    }
    printf("The Entered Array is :\n");
    for (int i = 0; i < 5; i++)
    {

        printf("%d\n",A[i]);
    }

    return 0;
}