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
        if (s[i] == ' ' && s[i+1] != ' ')
            c++; 
    }
    printf("The no of words in the sentence is %d",c+1);
}