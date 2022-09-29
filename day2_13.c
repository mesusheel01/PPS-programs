#include<stdio.h>
int pattern(int i)
{
    int a[10000],n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    a[i]=n;
    if(a[i]>0)
    {
        a[i+1]=a[i]-5;
         
         printf("%d",a[i]);i++;
         
    }
    else if(a[i]==n)
    {
        a[i+1]=a[i]+5;
         printf("%d",a[i]);
        i++;
    }
            return ;
            }
void main()
{
    int i,n;
    
    pattern(0);
}
