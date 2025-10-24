#include <stdio.h>
int main() {
    int a[5], i;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("\nYou entered:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}
