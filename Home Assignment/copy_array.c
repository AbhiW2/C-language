#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr1, *arr2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    
    arr1 = (int*) malloc(n * sizeof(int));
    arr2 = (int*) malloc(n * sizeof(int));

    
    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    
    printf("\nFirst Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond Array (Copied):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    
    free(arr1);
    free(arr2);

    return 0;
}
