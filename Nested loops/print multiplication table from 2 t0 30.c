#include<stdio.h>
int main(){
    int i,j;

    for(i=2;i<=30;i++){
        printf("Multiplication table of %d:\n",i);
            for(j=1;j<=10;j++){
                printf("%d x %d= %d\n",i,j,i*j);
            }
        }
        return 0;
}