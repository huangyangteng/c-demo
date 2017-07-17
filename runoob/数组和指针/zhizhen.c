#include <stdio.h>
int main()
{
	char a='F';
	int f=123;
	// 指针中存放的是地址,要避免使用未初始化的指针
	int *pf=&f;
	char *pa=&a;
	// 取值操作 *pa *pf
	printf("a=%c\n",*pa);
	printf("f=%d\n", *pf);
	
	// 用指针对变量进行间接赋值
	*pa='c';
	*pf+=100;
	printf("now,a=%c\n",*pa);
	printf("now,f=%d\n", *pf);

	// 指针在内存中一半占8个字节

	printf("sizeof pa=%ld\n", sizeof(pa));
	printf("sizeof pf=%ld\n", sizeof(pf));

	// 打印地址
	printf("the address of a is %p\n", pa);

	printf("the address of f is %p\n", pf);


}