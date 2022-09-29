#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the values of n to print the pattern\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            printf("*");
        }
        else
        {
            for(j=1;j<=(n-i);j++)
            printf(" ");
            for(j=(n-i+1);j<(n-i+2);j++)
            printf("*");
        }
      printf("\n"); 
    } 
}