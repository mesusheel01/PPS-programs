#include <stdio.h>
void main()
{
    int i,sum=0,n,j=1;
    printf("Enter the value of n to print the factorial sum \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=j*i;
        sum =sum +j;
    }
    printf("%d",sum);
}