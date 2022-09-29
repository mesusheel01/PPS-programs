#include<stdio.h>
int factorial(int n)
{
    if(n>=1)
    {
        return n*factorial(n-1);
    }
    return 1;
}
void main()
{
    int n ;
    printf("Enter the number to find the factorial of the number\n");
    scanf("%d",&n);
    printf("The factorial of the number is %d",factorial(n));
}