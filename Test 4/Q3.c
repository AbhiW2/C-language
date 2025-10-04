#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
        printf("Enter number of array:");
        scanf("%d",&n);
    
    int*A=(int*)malloc(n*sizeof(int));

        printf("Enter %d elements in array:",n);

    int i=0;
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
            for(i=0;i<n;i++){
                if(A[i]%2==0)
                    A[i]=0;
                    else
                        A[i]=1;
            }
            int min=0,temp=0;
            int j;
                min=i;
                for(i=0;i<n-1;i++){
                    for(j=i+1;j<n;j++){
                        if(A[j]< A[min]){
                            min =j;
                        }
                    }
                    temp=A[i];
                    A[i]=A[min];
                    A[min]=temp;
                }
                printf("Output:");
                for(i=0;i<n;i++){
            printf("%d ",A[i]);
                }
            free(A);
            return 0;
}