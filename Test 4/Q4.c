#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
        printf("Enter number of array:");
        scanf("%d",&n);

    int*arr=(int*)malloc(n*sizeof(int));

        printf("Enter %d elements in array:",n);
    int i;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
    
    int j;
    int count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }    
            }

        }
        printf("Number of good pairs=%d\n",count);

        free(arr);
        return 0;
}