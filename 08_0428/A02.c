#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	unsigned char cht, ch1, ch2;
	ch1=41;
	ch2=11;
	cht=ch1&ch2;   //101001&001011  //一個&是位元運算,二個&是邏輯判斷 
	printf("101001 and 001011=%2d\n", cht);
	cht=ch1|ch2;
	printf("101001 or 001011=%2d\n", cht); 
	cht=ch1^ch2;
	printf("101001 xor 001011=%2d\n", cht);
	system("pause");
	return 0;
}

