#include<stdio.h>
int main(){
    char ch;
        printf("Enter a charcter:");
        scanf("%c",&ch);

        if(ch>='A' && ch<='Z')
            printf("Charcter is upper");
        else if(ch>='a' && ch<='z')
            printf("Charcter is lower");
        else
            printf("Not a charcter");
        
        return 0;
}