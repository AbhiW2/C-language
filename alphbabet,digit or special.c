#include<stdio.h>
int main(){
    char ch;

        printf("Enter a charcter:");
        scanf("%c",&ch);

    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
        printf("charcter");
    else if(ch>='0' && ch<= '9')
        printf("number");

    else
        printf("special charcter");

return 0;


}
