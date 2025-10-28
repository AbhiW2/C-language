#include<stdio.h>
int main(){
     int a[2][2];
        printf("Enter 4 elements of 2*2  matrix:");
int r,c;
    for(r=0;r<2;r++)
        for(c=0;c<2;c++){
            scanf("%d",&a[r][c]);
        }
        printf("Matrix:\n");
        for(r=0;r<2;r++){
           for(c=0;c<2;c++)
            printf("%d ",a[r][c]);
        printf("\n");
}
        
return 0;
}