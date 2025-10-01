#include <stdio.h>

int main() {
    int n;
    printf("Enter number N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            printf("%d → Odd\n", i);
        else if (i % 4 == 0)
            printf("%d → Even and multiple of 4\n", i);
        else
            printf("%d → Even but not a multiple of 4\n", i);
    }

    return 0;
}
