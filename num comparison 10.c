#include<stdio.h>
int main(){
    int n;
        printf("Enter a number:");
        scanf("%d",&n);

        switch(n>10? 1:( n<10 ? -1:0)){
            case 1:printf("lagre");break;
            case -1 :printf("Small");break;
            case 0:printf("Equal");break;


        }
        return 0;
}