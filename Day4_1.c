#include<stdio.h>
void palindrome(int n)
{
    int r,rev=0,s;
    s=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==s)
    printf("Palindrome\n");
    else 
    printf("Not Palindrome");
}
void main()
{
    int n;
    printf("Enter the number to check : \n");
    scanf("%d",&n);
    palindrome(n);
}