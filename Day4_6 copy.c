#include<math.h>
#include<stdio.h>
void Strong(int n)
{
    int s,sum=0,fact=1,r,c;
    s=n;
    while(n>0)
    {
        r=n%10;
        for(i=1;i<r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
       if(sum==s)
       printf("strong\n");
       else 
       printf("Not strong");
}
void main()
{
    int n;
    printf("Enter the number to check if it is Armstrong or not\n");
    scanf("%d",&n);
    Strong(n);
}