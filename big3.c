#include <stdio.h>

void biggest3() {
    double n1, n2, n3;

    // Prompt the user to enter three numbers
    printf("Enter three different numbers: ");
    // Read the three numbers from the user
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // Check if n1 is the largest
    if (n1 >= n2 && n1 >= n3) {
        printf("%.2f is the largest number.\n", n1);
    } 
    // Check if n2 is the largest (if n1 was not)
    else if (n2 >= n1 && n2 >= n3) {
        printf("%.2f is the largest number.\n", n2);
    } 
    // If neither n1 nor n2 are the largest, then n3 must be
    else {
        printf("%.2f is the largest number.\n", n3);
    }

   // return 0;
}
