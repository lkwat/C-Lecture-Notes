#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int chinese, english, bonus;
	printf("Please input the score of chinese: ");
	scanf("%d", &chinese);
	printf("Please input the score of english: ");
	scanf("%d", &english);
	if (chinese ==100)
	{
		if (english ==100)
		bonus=50;
		else
		bonus=20;
	}
	else
	{
		if (english ==100)
		bonus=20;
		else
		bonus=0;
	}
	printf("bonus: %d\n", bonus);
	system("pause");
	return 0;
 } 
