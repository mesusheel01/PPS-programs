#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of the triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c)
    printf("Equilateral Triangle\n");
    else if(a==b ||a==c)
    printf("Isosceles Triangle\n");
    else 
    printf("Scalene Triangle\n");
}