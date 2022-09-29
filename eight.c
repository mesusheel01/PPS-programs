#include <stdio.h>
void main()
{
    int x,y;
    printf("Enter the coordinate points:\n");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    printf("Points %d and %d lies in First coordinate\n",x,y);
    else if(x<0 && y>0)
    printf("Points %d and %d lies in Second coordiante\n",x,y);
    else if(x<0 && x<0)
    printf("Points %d and %d lies in Third coordiante\n",x,y);
    else 
    printf("Points %d and %d lies in Fourth coordiante\n",x,y);
}