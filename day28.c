#include <stdio.h>
void main()
{
    int i,k,j,l;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=i;k++)
        printf(" ");
        for(j=5;j>=i;j--)
        printf("*");
        for(l=4;l>i;l--)
        printf("*");
        printf("\n");
    }
   
}