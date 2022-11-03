#include<stdio.h>
#include<string.h>
void main()
{
     char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   int i,flag;
   char str[100];
   gets(str);
   for(i=0;i<32;i++)
   {
      if(strcmp(str,keyword[i])==0)
      flag=1;
   }
   if(flag==1)
   printf("%s is a keyword",str);
   else
   printf("%s is not a keyword",str);
}