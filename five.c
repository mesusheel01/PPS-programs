/*#include <stdio.h>
void main()
{
    int d=01,m=01,y=2001,i,j,k,weekday;
    printf("Enter date, month and year:\n");
    scanf("%d%d%d",&i,&j,&k);
    
    weekday=(d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7;
    printf("The day of the week is :%d",weekday);
    switch(weekday)
    {
        case 0:
        printf("Sunday\n");
        break;
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thrusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6: 
        printf("Saturday\n");

    }
}*/
#include<stdio.h>
void main()
{
int mc,dc,d,m,yc,ny,y,i,n=0,t=0,day;
printf("Enter the date month and year\n");
scanf("%d%d%d",&d,&m,&y);
ny=y-2000;
for(i=1;i<y;i++)
{
if(i%4==0 && i%100!=0 || i%400==0)
{
    yc++;
}
for(i=1;i<=m;i++)
{
    if(i==1|| i==3 || i==5 ||i==7 || i==8 || i==10 || i==12)
 n=n+31;
 else if(i==4 || i==6 || i==9 || i==11)
 n=n+30;
 else if(i==2)
 n=n+28;

}
}
t=ny*365+yc+d+n;
day=t%7;
switch(day)
    {
        case 0:
        printf("Sunday\n");
        break;
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thrusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6: 
        printf("Saturday\n");

}
}