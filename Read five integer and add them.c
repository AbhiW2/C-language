#include <stdio.h>

int main() {
    int numbers[5];  
    int sum = 0;
    printf("Enter 5 integers:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);  
        sum += numbers[i];          
    }
    printf("The sum of the 5 integers is: %d\n", sum);

    return 0;
}
