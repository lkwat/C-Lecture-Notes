#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char row, column;
	for (row='A'; row<='G'; row++)
	{
		for (column=row; column<='G'; column++)
		{
			printf("%2c", column);		
		}
		printf("\n");
	}
	
    system("pause");
    return 0;
}
