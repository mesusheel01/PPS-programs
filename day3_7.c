#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,sum=0,j;
    printf("Enter the value of n to find the sum of the series.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("The sum of the series is %d",sum);
}