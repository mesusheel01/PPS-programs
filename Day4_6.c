#include<math.h>
#include<stdio.h>
void armstrong(int n)
{
    int s,sum=0,r,c;
    s=n;
    while (n>0)
    {
        n=n/10;c++;
    }
    n=s;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,c);
        n=n/10;
    }
       if(sum==s)
       printf("Armstrong\n");
       else 
       printf("Not armstrong");
}
void main()
{
    int n;
    printf("Enter the number to check if it is Armstrong or not\n");
    scanf("%d",&n);
    armstrong(n);
}