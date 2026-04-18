#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	char a;
	printf("Please enter 1, 2, 3 or 4: ");
	scanf("%ch", &a);
	switch (a)
	{
		case'1':
			printf("1 春天");
			break;
		case'2':
			printf("2 夏天");
			break;
		case'3':
	    	printf("3 秋天");
	    	break;
		case'4':
			printf("4 冬天");
	    	break;
	    default:
	    	printf("input error!\n");
			
	}
	system("pause");
	return 0;
}

