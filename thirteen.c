#include<stdio.h>
void main()
{
    int i,j,k,l,c;
   for(i=0;i<=4;i++)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for( j=0;j<i;j++)
        { c=j+i;
        printf("%d",c);}
        
    for(l=i+2;l>=2;l--)
    printf("%d",l);
        printf("\n");
    }}
