#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10],str2[10];
    printf("Enter two strings\n");
    gets(str1);
    gets(str2);
        if(strcmp(str1,str2)==0)
        
        printf("strings are same");
        else
printf("strings are different");
}