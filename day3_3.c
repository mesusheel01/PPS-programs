#include <stdio.h>
#include <math.h>
void main()
{
    int i,j,n,x,sum=1;
    printf("Enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
       sum=sum+pow(x,i);
    }
    printf("The sum of the series is %d",sum);
}