#include <stdio.h>

int main() {
    int x;
    int x2, result;
    printf("Enter an integer: ");
    scanf("%d", &x);

    x2 = x * x;

    result = x2 + (2 * x);
    printf("x² = %d\n", x2);
    printf("x² + 2x = %d\n", result);

    return 0;
}
