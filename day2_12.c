#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i+1;j++)
        printf("%d",j);
        for(k=i;k<=4;k++)
        printf(" ");
       
    
   
        for(k=i;k<5;k++)
        printf(" ");
        for(j=i+1;j>=1;j--)
        {
        printf("%d",j);
        }printf("\n");
    
}
    }