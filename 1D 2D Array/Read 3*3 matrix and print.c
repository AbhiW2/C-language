#include<stdio.h>
int main(){
    int A[3][3];
    int row,col;
        printf("Enter elements of 3*3 matrix:");
           for(row=0;row<3;row++)
            for(col=0;col<3;col++){
                scanf("%d",&A[row][col]);
            }
        printf("Matrix:\n");
            for(row=0;row<3;row++){
                for(col=0;col<3;col++)
                    printf("%d ",A[row][col]);
                    printf("\n");
                }
        return 0;
}