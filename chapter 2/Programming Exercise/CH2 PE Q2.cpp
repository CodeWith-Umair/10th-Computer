#include <stdio.h>
int main() {
	// Declare and initialize temperature in Celsius
	float tempInCelsius = 0;
	
	// Take Input From User
	printf("Enter Temperature in Celsius ... ");
	scanf("%f",&tempInCelsius);
	
	// Convert Celsius to Fahrenheit using formula: F = (9/5)*C + 32
	float tempInFahrenheit = (9/5)*tempInCelsius + 32;
	
	// Display the result
	printf("\nTemperature in Fahrenheit is ... %f\n",tempInFahrenheit);
	
	return 0;
}
