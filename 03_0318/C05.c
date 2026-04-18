#include <stdio.h>

int main(void)
{
    char grade;

    // Prompt the user to enter a grade
    printf("Enter your grade (A, B, C, etc.): ");
    scanf(" %c", &grade);  // the space before %c skips any leftover whitespace

    // Evaluate the grade
    switch (grade)
    {
        case 'A':
        case 'a':
            printf("Excellent work!\n");
            break;
        case 'B':
        case 'b':
            printf("Good job!\n");
            break;
        case 'C':
        case 'c':
            printf("Keep studying hard!\n");
            break;
        default:
            printf("You did not pass. Please try again.\n");
    }

    // Pause the program before exit (cross-platform)
    printf("Press Enter to exit...");
    getchar();  // consume leftover newline from previous input
    getchar();  // wait for user to press Enter

    return 0;
}
