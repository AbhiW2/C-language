#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Without using third variable ---\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);

    if (b != 0)
        printf("Division: %.2f\n", (float)a / b);
    else
        printf("Division not possible (divide by zero)\n");

    return 0;
}
