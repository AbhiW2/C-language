#include<stdio.h>
int main(){
    int week;
        printf("Enter week day:");
        scanf("%d",&week);

        if(week>7)
            printf("Invalid week day enter");
        else if(week==1)
            printf("Monday\n");
        else if(week==2)
            printf("Tuesday\n");
        else if(week==3)
            printf("Wednesday\n");
        else if (week==4)
            printf("Thrusday\n");
        else if(week==5)
            printf("friday\n");
        else if(week==6)
            printf("Saturday\n");
        else if(week==7)
            printf("Sunday\n");

        return 0;
}