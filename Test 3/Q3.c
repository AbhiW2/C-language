#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int i;
        printf("Enter number of array:");
        scanf("%d",&n);

    int*arr=(int*)malloc(n*sizeof(int));
    
        printf("Enter %d elements of array:",n);

    int sum=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        
        for(i=0;i<n;i++){
            sum+=arr[i];
        }
        printf("The average of the array elements is:%d",sum/n);

        free(arr);
    return 0;
}