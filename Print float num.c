#include <stdio.h>
int main() {
    float numbers[5]
    int i;
    printf("Enter 5 floating-point numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &numbers[i]);
    }
    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", numbers[i]);
    }
    return 0;
}
