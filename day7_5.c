#include<stdio.h>
void main()
{
    int i,c=0;
    char s[100];
    printf("Enter the sentence to count the word\n");
    scanf("%[^\n]s", s);
    i=0,c=0;
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i]>64 && s[i]<91)
        s[i]=s[i]+32;
        else if(s[i]>96 && s[i]<123)
        s[i]-=32; 
    }
    printf("The no of words in the sentence is \n");
     for(i=0;s[i]!='\0';i++)
    {
    printf("%s",s[i])
}
}
