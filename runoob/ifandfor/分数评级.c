#include <stdio.h>

int main()
{

	int i;
	printf("请输入分数吧\n");
	scanf("%d",&i);
	if (i>90)
	{
		printf("A\n");
	}
	else if (i>=80 && i<90)
	{
		printf("B\n");
	}
	else if (i>=70 && i<80)
	{
		printf("C\n");

	}
	else if (i>=60 && i<70)
	{
		printf("D\n");
	}
	else{
		printf("不及格\n");
	}
}