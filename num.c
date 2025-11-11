#include<stdio.h>
int main(){
    int num;
        printf("Enter a number:");
        scanf("%d",&num);

        if(num<100)
            printf("Num is small=%d",num);
        else if(num>=100 && num<=200)
            printf("Number is large=%d",num);
        else if(num>200 && num<=300)
            printf("Number is bigger=%d",num);
        else if(num>300 && num<=400)
            printf("Number is largest=%d ",num);
        else if(num>400)
            printf("Number is very large=%d",num);
    return 0;
}
