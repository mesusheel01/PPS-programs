#include<stdio.h>
#include<string.h>
void main()
{
    char stre[100],str[100];int i;
    printf("Enter the string to print all possilbe prefixes\n");
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        stre[i]=str[i];
        printf("%c, ", stre[i]);
        i++;
    }
}