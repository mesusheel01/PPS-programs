#include <stdio.h>
void main()
{
    int a;
    printf("Enter the temperature in centigrade");
    scanf("%d",&a);
    if(a<0)
    printf("Freezing weathen");
    else if(a>=0 && a<=10)
    printf("Very cold weather\n");
    else if(a>10 && a<=20)
    printf("Cold Weather\n");
    else if(a>20 && a<=30)
    printf("Normal in Temp\n");
    else if(a>30 && a<=40)
    printf("Its hot");
    else if(a>=40)
    printf("Its Very Hot\n");
}