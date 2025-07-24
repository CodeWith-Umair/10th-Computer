#include <stdio.h>
int main() {
    // Declare and Initialize original prices of 5 shirts
    float shirt1 = 423;
    float shirt2 = 320;
    float shirt3 = 270;
    float shirt4 = 680;
    float shirt5 = 520;

    // Calculate total original price
    float totalOriginalPrice = shirt1 + shirt2 + shirt3 + shirt4 + shirt5;

    // Discount percentage
    float discountRate = 15.0;

    // Calculate discount amount
    float discountAmount = (discountRate / 100) * totalOriginalPrice;

    // Calculate final price after discount
    float finalPrice = totalOriginalPrice - discountAmount;

    // Display results
    printf("Total Original Price       ... %.2f\n", totalOriginalPrice);
    printf("Discount Amount (15%%)     ... %.2f\n", discountAmount);
    printf("Final Price After Discount ... %.2f\n", finalPrice);

    return 0;
}
