#include <stdio.h>
#include <math.h>
void main()
{
    int i,j,n,x,sum=0;
    printf("Enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        j=1;
        if(i%2==1)
        {
            if(i==3)
            {
            j=j*(i+4);
       sum=sum+(pow(x,(i+4))/j);
            }
            else if(x==1)
            {
                j=j+(i+4);
                sum=sum+(pow(x,(i+4))/j);
            }
            }
            }
     printf("The sum of the series is %d",sum);
}