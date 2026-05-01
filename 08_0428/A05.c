#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int score[4]={75, 88, 66, 57};
	printf("score[0]=%d, *(score+0)=%d\n", score[0], *(score+0));
	printf("score[1]=%d, *(score+1)=%d\n", score[1], *(score+1));
	printf("score[2]=%d, *(score+2)=%d\n", score[2], *(score+2));
	printf("score[3]=%d, *(score+3)=%d\n", score[3], *(score+3));
	system("pause");
	return 0;
}

