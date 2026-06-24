// Write a program to Write function for Armstrong.
#include <stdio.h>
void Arm(int);  // Function Prototype
void Arm(int x) // Function Definition
{
    int armstrong = 0, temp = x;
    for (int i = 0; temp != 0; i++)
    {
        armstrong = armstrong + ((temp % 10) * (temp % 10) * (temp % 10));
        temp = temp / 10;
    }
    if (armstrong == x)
    {
        printf("The number is Armstrong.\n");
    }
    else
    {
        printf("The number is not Armstrong.\n");
    }
}
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d", &a);
    Arm(a); // Function Call
    return 0;
}