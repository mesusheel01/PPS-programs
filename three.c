#include <stdio.h>
void main()
{
    int a;
    printf("Enter the alpahbet to check if it is alaphabet or consonant\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("The entered alphabet is vowel.");
    }
    else 
    printf("The entered alphabet is consonant.");
}