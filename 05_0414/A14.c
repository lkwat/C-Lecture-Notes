#include<stdio.h>
#include<stdlib.h>
#define NUM 72
int guess_num(int, int, int); 
int main(void)
{
	int min=1, max=100, keyin=0, count=0;
	while (keyin!=NUM)
	{
		count=count+1;
		printf("guess a number: (%d - %d)\n", min, max);
		scanf("%d", &keyin);
		fflush(stdin);
		guess_num(keyin, min, max);
		printf("You have guessed %d times \n", count);
	}
	printf("Game Over\n");
	return 0;
}
int guess_num(int keyin, int min, int max)
{
	if((keyin>=min)&&(keyin<=max))
	{
		if(keyin==NUM)
		{
			printf("Bingo! Guess it right, the answer is: %d\n", keyin);
		}
		else if (keyin>NUM) 
		{
			printf("smaller\n");
		}
		else if (keyin<NUM)
		{
			printf("bigger\n");
		}
	}
	else
	{
		printf("Please enter a number within the suggested range (%d -%d): ", min,max);
	}
}

