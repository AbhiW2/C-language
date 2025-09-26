#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float per;

        printf("Enter marks of 5 student:");
        scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

        per=(m1+m2+m3+m4+m5)/5.0;

        if(per>=90)
            printf("Grade A\n");
        else if(per>=80 && per<90)
            printf("Grade B\n");
        else if(per>=70 && per<80)
            printf("C grade\n");
        else if(per>=60 && per<70)
            printf("D grade\n");
        else if(per>=40 && per<60)
            printf("E grade\n");
        else 
            printf("Fail");

    return 0;

}