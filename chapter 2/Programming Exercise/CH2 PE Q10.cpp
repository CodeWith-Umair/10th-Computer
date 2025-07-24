#include <stdio.h>
int main() {
	// Declare variables
    float radiusOfCircle;

    // Take Input values
    printf("Enter Radius of Circle: ");
    scanf("%f", &radiusOfCircle);
    
    float areaOfCircle = 3.14*radiusOfCircle*radiusOfCircle;
    
    printf("Radius of Circle is %.2f\n",radiusOfCircle);
    printf("Area of Circle is %.2f\n",areaOfCircle);    

    return 0;
}

