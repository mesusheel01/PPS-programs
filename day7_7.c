#include<stdio.h>
void main()
{
    char str1[100],str2[100],i,l;
    printf("enter string 1\n");
    gets(str1);
    printf("Enter string 2\n");
    gets(str2);   
    i=0,l=0;
    while(str1[i]!='\0')
    {
        i++,l++;
    }
    i=0;
    while(str1[i]!='\0')
    {
        str1[l+i]=str2[i];
        i++;
    }
    str1[i]='\0';
    printf("String after concatenation is %s",str1);
}