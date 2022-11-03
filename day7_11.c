#include<stdio.h>
void main()
{
    char str[10],i;
   printf("enter the string\n");
   gets(str);
    i=0;
   for(;str[i]!='\0';i++)
   {
      if(str[i]==' ')
      {
        str[i]=str[i+1];
      }
   }
    printf("string is %s",str);
}