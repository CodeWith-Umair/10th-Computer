#include <stdio.h>
int main() {
	// Declare variables
    char Character;
    int Steps;

    // Get Input from the User
    printf("Enter character: ");
    scanf(" %c", &Character);
    
    printf("Enter steps: ");
    scanf("%d", &Steps);

    // Calculate the new character by adding the steps
    char NewCharacter = Character + Steps;

    // Display the new character
    printf("New character : %c\n", NewCharacter);

    return 0;
}

