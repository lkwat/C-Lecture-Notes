#include <stdlib.h>
#include <stdio.h>
void func(void);
int a;
int main(void)
{
    a=100;
	printf("Before call func(), a= %d\n", a);
	func();
	printf("After call func(), a= %d\n", a);
	system("pause");
	return 0; 
}
void func(void)
{
	a=a+400;
	printf("In func() function, a= %d\n", a);
}
