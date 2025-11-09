#include <stdio.h>

int main() {
    int a, b;     
    int result;   

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = a + b;
    printf("Addition: %d\n", result);

    result = a - b;
    printf("Subtraction: %d\n", result);

    result = a / b;   // division result
    printf("Division: %d\n", result);

    return 0;
}