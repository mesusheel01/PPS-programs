##include<stdio.h>
void mean_median(int a[],int n)
{
    int i,m,mean=0,median,c,f[10];
    float max,h;
     for(i=0;i<n;i++)
    {
        c=1;
        mean=mean+a[i];
    }
    if(n%2==0)
    {
        m=n/2;
        h=a[m]+a[m-1];
        max = h/2;
    }
    else
    {
        max = (a[(n/2)]);
    }
    mean= mean/n;
    printf("Mean is %d \n",mean);
    printf("Median is %f",max);
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
