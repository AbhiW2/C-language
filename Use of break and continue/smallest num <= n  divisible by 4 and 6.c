#include <stdio.h>
int main() {
    int N, i;
    printf("Enter a number N: ");
    scanf("%d", &N);
    for (i = N; i >= 1; i--) {
        if (i % 12 == 0) {
            printf("The smallest number less than or equal to %d divisible by both 4 and 6 is %d\n", N, i);
            break;
        }
    }

    return 0;
}
