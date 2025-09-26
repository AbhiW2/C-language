#include<stdio.h>
int main(){
    float cp,sp;
        printf("Enter sp and cp:");
        scanf("%f %f",&cp,&sp);

        if(cp>sp)
            printf("Loss=%2f",cp-sp);
        else if(sp>cp)
            printf("Profit=%2f",sp-cp);
        else  
            printf("No profit no loss");

        return 0;
}