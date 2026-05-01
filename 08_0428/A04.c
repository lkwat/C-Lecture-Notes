#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int i, AB[5]={32, 16, 35, 65, 77};
	for (i=0; i<5; i++)
	{
		printf("&AB[%d]=%p\n", i, &AB[i]);
	} 
	system("pause");
	return 0;
}

