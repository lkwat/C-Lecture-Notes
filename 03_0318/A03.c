#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	float a, b;
	char op;
	printf("Please input the expression:(ex: 3+2)\n");
	scanf("%f %c %f", &a, &op, &b);
	switch (op)
	{
		case'+':
			printf("%.1f+%.1f=%.1f\n", a, b, a+b);
			break;
		case'-':
			printf("%.1f-%.1f=%.1f\n", a, b, a-b);
			break;
		case'*':
	    	printf("%.1f*%.1f=%.1f\n", a, b, a*b);
	    	break;
		case'/':
			printf("%.1f/%.1f=%.1f\n", a, b, a/b);
	    	break;
	    default:
	    	printf("input error!\n");
			
	}
	system("pause");
	return 0;
} 
