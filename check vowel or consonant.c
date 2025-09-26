#include<stdio.h>
int main(){
    char ch;
        printf("Enter a character:");
        scanf("%c",&ch);
    if((ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
      if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Charcter is vowel");
    else
        printf("charcter is not vowel");
    else    
        printf("Not a consonant");
    
        return 0;

}