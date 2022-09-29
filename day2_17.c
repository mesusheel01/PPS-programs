#include<stdio.h>
void main()
{
    int i,l,j,k;
    for(i=1;i<=3;i++)
    {
       for(k=i;k<=2;k++)
       printf(" ");
        for(j=1;j<=i;j++)
        printf("%d",j);
           
    if(i!=1){
     for(l=1;l<i;l++)
     printf("%d",l);}
     printf(" ");
    
}
}