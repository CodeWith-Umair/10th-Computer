#include <stdio.h>
int main() {
	// Declare variables
    int number, firstDigit, lastDigit, sum;

    // Take Input: 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    // Extract first digit by dividing by 10000
    firstDigit = number / 10000;

    // Extract last digit using modulus
    lastDigit = number % 10;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    // Output
    printf("First Digit = %d\n", firstDigit);
    printf("Last Digit  = %d\n", lastDigit);
    printf("Sum of First and Last Digit = %d\n", sum);

    return 0;
}

