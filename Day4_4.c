#include <stdio.h>
void perfect(int n)
{
    int s,c=0,sum=0,r,g=0;
    s=n;
    while(n>0)
    {
        c++;
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    while(s>0)
    {
        r=s%10;
        if(sum%r==0)
        {
             g++;  
        }
        s=s/10;
    }
    if(c==g)
    printf("The number is Perfect\n");
    else
    printf("The number is not perfect");
}
void main()
{
    int n;
    printf("Enter the number to check if it is perfect or not\n");
    scanf("%d",&n);
    perfect(n);
}