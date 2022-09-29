#include<stdio.h>
void main()
{
    char a[10];
    int i,l;
    printf("Enter the name to find its length\n");
    gets(a);
    i=0;l=0;
    while(a[i]!='\0')
    {
        i++;
        l++;
    }
    printf("The length of the String is %d",l);
}