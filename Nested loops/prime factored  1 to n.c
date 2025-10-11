#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        int num = i;
        printf("%d = ", num);
        for (j = 2; j <= num; j++) {
            while (num % j == 0) {
                printf("%d", j);
                num /= j;
                if (num > 1) printf(" x ");
            }
        }
        printf("\n");
    }
    return 0;
}
