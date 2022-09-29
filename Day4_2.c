#include<stdio.h>
void mean_median(int a[],int n)
{
    int i,max,j,mean=0,median,c,f[10];
     for(i=0;i<n;i++)
    {
        c=1;
        mean=mean+a[i];
        for(j=i+1;j<n;j++)
        {
            
            if(a[i]==a[j])
            {
               c++;
            }
            f[i]=c; 
            
            }
            if(f[i]>f[i+1])
            {
                max=f[i];
            }      
            else
            max=f[i+1];  
         
    }
    printf("Mean is %d",mean);
    printf("Median is %d",max);
}
void main()
{
    int a[10],n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements array A\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mean_median(a,n);
}