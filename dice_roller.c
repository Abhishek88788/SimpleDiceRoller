#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to print the face of the dice
void print_dice_face(int num);

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time
    char refresh;
    system("cls");  // Clear the console

    do {
        int random_n = (rand() % 6) + 1;  // Generate a random number between 1 and 6
        print_dice_face(random_n);  // Print the corresponding dice face
        printf("Press 'r' to roll the dice & any other key to exit: ");
        scanf("%c", &refresh);  // Get user input to refresh or exit
        while (getchar() != '\n');  // Clear the input buffer
        system("cls");  // Clear the console
    } while (refresh == 'r' || refresh == 'R');  // Continue if the user presses 'r' or 'R'

    return 0;  // End of program
}

// Function to print the face of the dice based on the number
void print_dice_face(int num) {
    switch (num) {
        case 1:
            printf("           -------\n");
            printf("          |       |\n");
            printf("          |   .   |\n");
            printf("          |       |\n");
            printf("           -------\n");
            break;
        case 2:
            printf("           -------\n");
            printf("          | .     |\n");
            printf("          |       |\n");
            printf("          |     . |\n");
            printf("           -------\n");
            break;
        case 3:
            printf("           -------\n");
            printf("          | .     |\n");
            printf("          |   .   |\n");
            printf("          |     . |\n");
            printf("           -------\n");
            break;
        case 4:
            printf("           -------\n");
            printf("          | .   . |\n");
            printf("          |       |\n");
            printf("          | .   . |\n");
            printf("           -------\n");
            break;
        case 5:
            printf("           -------\n");
            printf("          | .   . |\n");
            printf("          |   .   |\n");
            printf("          | .   . |\n");
            printf("           -------\n");
            break;
        case 6:
            printf("           -------\n");
            printf("          | .   . |\n");
            printf("          | .   . |\n");
            printf("          | .   . |\n");
            printf("           -------\n");
            break;
    }
}
