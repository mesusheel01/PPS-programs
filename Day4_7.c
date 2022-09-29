#include<stdio.h>
#include<math.h>
void sum(int n)
{
    int i,j,fac=1;
    float sum;
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=(2*i-1);j++)
        {
            fac=fac*j;
        }
        sum=sum+(pow(-1,(i+1))*(i/fac));
    }
    printf("the sum is %f",sum);
}
void main()
{
    int i,j,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    sum(n);
}