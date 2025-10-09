#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1: result = a + b; printf("Result = %.2f\n", result); break;
            case 2: result = a - b; printf("Result = %.2f\n", result); break;
            case 3: result = a * b; printf("Result = %.2f\n", result); break;
            case 4: 
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Error! Division by zero.\n");
                break;
            case 5: printf("Exiting calculator...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
