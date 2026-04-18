#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int deposit = 0;   // Total deposited amount
    int num = 0;       // Number of deposits made
    int money;         // Amount of current deposit

    while (deposit < 35000)
    {
        num++;  // Increment deposit counter

        // Prompt the user to enter deposit amount
        printf("Please enter the deposit amount: ");
        scanf("%d", &money);

        // Show current deposit number
        printf("Number of deposits: %d\n", num);

        // Add entered amount to total deposit
        deposit += money;

        // Show current accumulated deposit
        printf("Current total deposit = %d\n", deposit);
    }

    // Final message when target is reached
    printf("Congratulations! Your total deposit is %d, and you can now buy an iPhone 17 512GB.\n", deposit);

    system("pause");
    return 0;
}
