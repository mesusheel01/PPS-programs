#include<stdio.h>
void main()
{
    char str1[20];
    char str2[20];int i,flag=1,l;
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
    i=0;
    while(str1[i]!='\0')
    {
           if(str1[i]!=str2[i])
           {
            flag=0;
            break;
           }
           i++;
    }
    if(flag=1)
    printf("String is palindrome");
    else
    printf("String is not palindrome");
}