#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main(void)
{
	int score[MAX];
	int i=0, num;
	float sum=0.0f;
	printf("Please input the score, input 0 to end:\n");
	do
	{
		if(i==MAX)
		{
			printf("Array space has been used up!!\n");
			i++;
			break;
		}
		printf("Please input the score: ");
		scanf("%d", &score[i]);
		fflush(stdin);
	}while (score[i++]>0);
	num=i-1;
	for(i=0; i<num; i++)
	{
		sum=sum+score[i];
	}
	if(score[0]==0)
	{
		printf("No data\n");
	}
	else
	{
		printf("average score: %.1f\n", sum/num);
	}
	return 0;
}

