#include<stdio.h>
int main(){
    int month,year;
        printf("Enter a month:");
        scanf("%d",&month);
        printf("Enter year:");
        scanf("%d",&year);

        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            printf("31 days in month");
        else if(month==4||month==6||month==9||month==11)
            printf("30 days in month");
        else if(month==2){
                if((year % 400 == 0)||(year % 4==0 && year %100!=0))
                    printf("29 days in month(leap year)");
                else    
                    printf("28 days in month");
        }
       return 0;     
}