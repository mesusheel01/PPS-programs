#include<stdio.h>
void main()
{
    char str1[20];
    char str2[20];int i,l;
    printf("Enter the name to reverse\n");
    gets(str1);
    i=0;l=0;
    while(str1[i]!='\0')
    {
        i++;l++;
    }
    i=0;
    while(str1[i]!='\0')
    {
       str2[i]=str1[l-1];
       i++;l--;
    }
    str2[i]='\0';
    printf("String after reversing is %s",str2);
}