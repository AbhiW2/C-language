#include<stdio.h>
int main(){
    int r,c;
    int A[3][3];
        printf("Enter 3*3 matrix:");
    for(r=0;r<3;r++)
        for(c=0;c<3;c++)
            scanf("%d",&A[r][c]);
        for(r=0;r<3;r++){
         int rowsum=0,colsum=0;
            for(c=0;c<3;c++){
                rowsum +=A[r][c];
                colsum +=A[c][r];

            }
        printf("Row = %d,col =%d\n",rowsum,colsum);
        }
    return 0;
}    