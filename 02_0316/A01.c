#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int n1=8, n2=9;
	float num1=3.02f, num2=3.816f;
	printf("num1=%d, num2=%d\n", num1, num2);    
	/*
		num1和num2是float型別,卻使用了%d(整數)格式指定符,
		這導致資料解讀錯誤,印出了無意義的整數值(如-1073741824和0)	
	*/
	printf("n1=%d, n2=%d\n", n1, n2);
	printf("num1=%5.2f, num2=%5.2f\n", num1, num2);   
	/*
		逗號,要打在雙引號""外
	*/ 
	system("pause");
	return 0;
 } 
