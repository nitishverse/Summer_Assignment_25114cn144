// Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int SUM (int,int);//function prototype
int SUM (int x,int y)//function definition
{
    
    return x+y;
}
int main(){
    int a,b,sum;
    printf("Enter the Number\n");
    scanf("%d %d" ,&a,&b);
    sum=SUM(a,b);
    printf("The sum of given number is %d\n",sum);
    return 0;
}