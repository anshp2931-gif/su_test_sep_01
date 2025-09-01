#include <stdio.h>
int main() {
    int n;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check power of 2 using bitwise operator
    if (n > 0 && (n & (n - 1)) == 0) {
        printf("%d is a Power of 2.\n", n);
    } else {
        printf("%d is NOT a Power of 2.\n", n);
    }

    return 0;
}
