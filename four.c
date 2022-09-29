#include <stdio.h>
void main()
{
    int a;
    printf("Enter the year to check wheather the entered year is lead year or not.\n");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0 || a%400==0)
    {
        printf("It's a leap year.");
    }
    else 
    printf("It's a not leap year.");
}