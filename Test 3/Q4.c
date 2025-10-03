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
        int pos=0,neg=0,zero=0;
        for(i=0;i<n;i++){
            if(arr[i]>0)
                pos++;
            else if(arr[i]<0)
                neg++;
            else 
                zero++;
        }

        printf("Positive count:%d\n",pos);
        printf("Negative count:%d\n",neg);
        printf("Zero count:%d\n",zero);


        printf("Pairs with positive sum:");
        int j;
            for(i=0;i<n;i++)
                for(j=i+1;j<n;j++){
                    if(arr[i]+arr[j]>0)
                
            printf("(%d %d)\n",arr[i],arr[j]);
                }
            free(arr);
            return 0;

}