#include <stdio.h>

int main() {
    int nums, sum = 0;

    printf("Enter the number:\n");

    if (scanf("%d", &nums) != 1) {
        printf("Invalid input");
        return 0;
    }

    for (int i = 1; i <= nums; i += 2) {
        sum += i;
    }

    printf("%d", sum);
    return 0;
}
