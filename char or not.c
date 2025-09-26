#include<stdio.h>
int main(){
    int ch;
        printf("Enter a character:");
        scanf("%c",&ch);

    if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
        printf("You entered a charcter");
    else
        printf("Not charter");
return 0;
}