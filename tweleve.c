#include <stdio.h>
void main()
{
    char i,j;
    for(i='E';i>='A';i--)
    {
        for(j=i;j<='E';j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}