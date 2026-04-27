#include <stdlib.h>
#include <stdio.h>
void func(void);
int main(void)
{
	func();
	func();
	func();
	system("pause");
	return 0; 
}
void func(void)
{
	static int a=100;            //static ¿R∫A≈‹º∆ 
	printf("In func() function, a= %d\n", a);
	a+=200; 
}
