#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long fact = 1; // Use unsigned long long for larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    // return 0;
}
