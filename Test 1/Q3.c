#include<stdio.h>
int main(){
    int n,i,marks;
        printf("Enter number of student:");
        scanf("%d",&n);

        printf("Enter %d marks of student:",n);

        for(i=1;i<=n;i++){
            scanf("%d",&marks);

        if(marks>=90)
            printf("Grade A\n");
        else if(marks>=75)
            printf("Grade B\n");
        else if(marks>=60)
            printf("Grade C\n");
        else if(marks>=40)
            printf("Grade D\n");
        else
            printf("Fail\n");
        }
        return 0;
}