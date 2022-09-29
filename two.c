#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three integers :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("C is largest");
    }
    else if(b>c)
    {
        if(b>a)
        printf("B is largest \n");

    }
    else if(c>a)
    {
        if(c>b)
        printf("C is largest\n");
    }
}