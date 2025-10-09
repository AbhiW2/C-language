#include<stdio.h>
#include<string.h>
int main(){
    char password[20];
    const char correct[]="abhi@123";

    do{
        printf("Enter a correct password:");
        scanf("%s",&password);
    }while(strcmp(password,correct)!=0);
        printf("Your Enter password is correct");

        return 0;
}