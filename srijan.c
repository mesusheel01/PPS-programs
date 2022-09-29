#include<stdio.h>
void main()
{
    int i,j,k,l=0,m;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<5;k++)
       { printf(" ");}l++;
        for(j=l;j>=1;j--)
        printf("%d",j);
        for(m=j+2;m<=l;m++)
        printf("%d",m);
        printf("\n");
    }
}