#include<stdio.h>
int main(){

int year;
    printf("Enter a year:");
    scanf("%d",&year);

if((year%4==0)|| (year%4==0 && year %100!=0))
    printf("year is a leap year\n",year);

else
    printf("year is not leap year\n",year);
return 0;
}