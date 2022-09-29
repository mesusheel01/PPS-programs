#include<stdio.h> 
void main()
{
    int i,d=0,j=1,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j*i;
        d=d+j/i;
    }
    printf("The sum of the series is %d",d);
}