#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;  
    int max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!");
        return 1;   
    }

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    free(arr);

    return 0;
}
