#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=i;k++)
        printf(" ");
        for(j=5;j>=i;j--)
        printf("*");
        for(l=4;l>i;l--)
        printf("*");
        printf("\n");
    } for(i=1;i<=5;i++)
    {
        for(k=i;k<=4;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        for(l=1;l<=i;l++)
        printf("*");
        printf("\n");
    }
     
}
