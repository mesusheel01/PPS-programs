#include <stdio.h>
void main()
{
    int hra,da;
    int allow,totalS,pf,salary;char grade; 
    printf("Enter the basic salary and grade:");
    scanf("%d%c",&salary,&grade);
 hra =.2*salary;
 da= .5*salary;
 pf=.11*salary;
 if(grade=='A'){
    allow=1700;}
 else if(grade =='B')
 {
 allow=1500;}
 else if(grade=='C');
 {
    allow=1300;
 }
 totalS=salary+hra+da+allow-pf;
 printf("The total salary is : %d ",totalS);
}