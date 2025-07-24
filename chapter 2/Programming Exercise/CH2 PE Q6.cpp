#include <stdio.h>
int main() {
	// Declare variables
    int a, b;

    // Take Input values
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);

    // Swap without third variable using arithmetic
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped values
    printf("After Swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

