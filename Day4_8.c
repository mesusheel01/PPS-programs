#include<math.h>
#include<stdio.h>
int gcd(int x,int y)
{
    if(x==0)
    return x;
    else if(y==0)
    return y;
    else if(x>y)
    return(x-y,y);
    return(x,y-x);
}
void main()
{
    int x ,y;
    printf("Enter the value of x and y to find. \n");
    scanf("%d%d",&x,&y);
    printf("The gcd of %d and %d is %d",x,y,gcd(x,y));
}