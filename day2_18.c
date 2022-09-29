#include<stdio.h>
void main()
{
    int i,j,l;
    char str1[10];
    printf("Enter the name to print the pattern\n");
    gets(str1);
    i=0;l=0;
    while(str1[i]!='\0')
    {
        i++;l++;
    }
    i=0;
    while(str1[i]!='\0')
    {
        for(j=i;j<l;j++)
        {
            printf("%s",str1[j]);
        }
        printf("\n");i++;
    }
}