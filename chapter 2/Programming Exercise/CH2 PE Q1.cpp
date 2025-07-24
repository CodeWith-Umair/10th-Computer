#include <stdio.h>
int main() {
	//Declare all variables as per Requirement
    float payRatePerHour, overtimePayRate;
    float workingHours, overtimeHours;
    float basicSalary, overtimeSalary, totalSalary;

    // Take Input From User
    printf("Enter Pay Rate per Hour: ");
    scanf("%f", &payRatePerHour);

    printf("Enter Overtime Pay Rate: ");
    scanf("%f", &overtimePayRate);

    printf("Enter Working Hours of Employee: ");
    scanf("%f", &workingHours);

    printf("Enter Overtime Hours of Employee: ");
    scanf("%f", &overtimeHours);

    // Calculate Basic Salary, Overtime Salary, and Total Salary
    basicSalary = payRatePerHour * workingHours;
    overtimeSalary = overtimePayRate * overtimeHours;
    totalSalary = basicSalary + overtimeSalary;

    // Display the results
    printf("\nBasic Salary = %.2f", basicSalary);
    printf("\nOvertime Salary = %.2f", overtimeSalary);
    printf("\nTotal Salary = %.2f\n", totalSalary);

    return 0;
}

