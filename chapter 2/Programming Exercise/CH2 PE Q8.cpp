#include <stdio.h>
int main() {
    // Declare variables
    float monthlyIncome, totalYearlyIncome;
    float monthlyExpense, totalYearlyExpenses;
    float monthlySavings, totalYearlySaving;
    float averageSavingPerMonth, averageExpensePerMonth;

    // Take input from user
    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);

    printf("Enter your total monthly expenses (e.g., electricity + gas + food): ");
    scanf("%f", &monthlyExpense);

    // Calculations
    totalYearlyExpenses = monthlyExpense * 12;
    totalYearlyIncome = monthlyIncome * 12;

    monthlySavings = monthlyIncome - monthlyExpense;
    totalYearlySaving = monthlySavings * 12;

    averageSavingPerMonth = totalYearlySaving / 12;
    averageExpensePerMonth = totalYearlyExpenses / 12;

    // Display results
    printf("\nTotal Monthly Income       : %.2f\n", monthlyIncome);
    printf("Total Yearly Income        : %.2f\n", totalYearlyIncome);

    printf("\nTotal Monthly Expenses     : %.2f\n", monthlyExpense);
    printf("Total Yearly Expenses      : %.2f\n", totalYearlyExpenses);

    printf("\nMonthly Savings            : %.2f\n", monthlySavings);
    printf("Yearly Saving              : %.2f\n", totalYearlySaving);

    printf("\nAverage Saving per Month   : %.2f\n", averageSavingPerMonth);
    printf("Average Expense per Month  : %.2f\n", averageExpensePerMonth);

    return 0;
}
