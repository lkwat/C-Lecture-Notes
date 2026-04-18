#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char guess;
	while (guess!='e')
	{
		printf("Press a to z: ");
		scanf("%c", &guess);
		fflush(stdin);
		if(guess!='e')
		{
			printf("You guess wrong, guess again!\n");
		}
	}
	printf("Congratulations! You got it!\n");
    system("pause");
    return 0;
}
