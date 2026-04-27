#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	scanf("%s", &str);
	fflush(stdin);
	if (str[0]=='+')
	{
		for (i=1; i<strlen(str); i++)
		{
			str[i]+=2;
			if (str[i]>'Z')
			{
				str[i]-=26;
	    	} 
		}
	}
	if (str[0]=='-')
	{
		for (i=1; i<strlen(str); i++)
		{
			str[i]-=2;
			if (str[i]<'A')
			{
				str[i]+=26;
			}
		} 
	}
	printf("%s\n", str);
	system("pause");
	return 0;
}

