#include<stdio.h>
int main(){
    int month;
        printf("Enter month number:");
        scanf("%d",&month);

        switch(month){
            case 1:printf("January");break;
            case 2:printf("Feburary");break;
            case 3:printf("March");break;
            case 4:printf("April");break;
            case 5:printf("May");break;
            case 6:printf("June");break;
            case 7:printf("Jully");break;
            case 8:printf("Augest");break;
            case 9:printf("September");break;
            case 10:printf("Octumber");break;
            case 11:printf("November");break;
            case 12:printf("december");break;

            default:printf("Inavlid input");break;
        }
        return 0;
}