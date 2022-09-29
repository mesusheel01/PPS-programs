#include<stdio.h>
void prime(int n)
{
    int i,j,c;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++; 
        }
        if(c==2)
        printf("%d ",i);
    }
}
void main()
{
    int n;
    printf("Enter the length upto which you want to print prime number\n");
    scanf("%d",&n);
    prime(n);
}