/*#include <stdio.h>
void main()
{
    int i,j,d=0 ;char c;
    for(i=63;i<=67;i++)
    {d++;
        for( j=1;j<d;j++)
        { c= i +j;
        printf("%c",c);}
        printf("\n");
    }
}*/
#include <stdio.h>
void main()
{
    int i,j,d=0 ;char c;
    for(i=69;i>=64;i--)
    {d++;
        for( j=1;j<d;j++)
        { c= i +j;
        printf("%c",c);}
        printf("\n");
    }
}