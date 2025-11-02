#include<stdio.h>
int main(){
    int n;
        printf("Enter a size of matrix:");
        scanf("%d",&n);
    int A[n][n];
        printf("Enter %d elements in array:",n*n);
    int r,c;
            for(r=0;r<n;r++)
                for(c=0;c<n;c++){
                    scanf("%d",&A[r][c]);
                }
            printf("Enter row number(0 to %d):",n-1);
            scanf("%d",&c);
                if(c>=0 && c<n){
                    printf("Col %d :",r);
                for(r=0;r<n;r++){
                    printf("%d ",A[r][0]);
                }
            }
                else
                    printf("Invalid col enter");

        return 0;
}