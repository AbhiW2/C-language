#include <stdio.h>
int main() {
    int nums[5];
    int sum = 0;
    float result;

    printf("Enter 5 integers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    if(sum > 10)
        result = sum / 2.0;   
    else
        result = sum / 3.0;   
    printf("Result = %.2f\n", result);

    return 0;
}
