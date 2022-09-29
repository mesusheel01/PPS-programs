#include <stdio.h>
#include <math.h>
void main()
{
    int i,j=1,n,x,sum;
    printf("Enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        j=1;
        if(i%2==0)
        {
            j=j*i;
            sum=sum-(pow(x,i)/j);
        }
        else 
        {
            j=j*i;
            sum=sum+(pow(x,i)/j);
        }
    }sum=sum+1;
    printf("The sum of the series is %d",sum);
}