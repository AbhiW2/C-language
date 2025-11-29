#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, key, flag = 0;
    int *arr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &key);


    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Number %d found at position %d\n", key, i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Number %d not found in the array.\n", key);
    }

    free(arr);

    return 0;
}
