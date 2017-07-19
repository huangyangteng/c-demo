#include <stdio.h>

int main()
{
	int i;
	printf("您老贵庚：\n");
	scanf("%d",&i);
	if (i>=18)
	{
		printf("进门左拐\n");
	}
	else
	{
		printf("慢走不送\n");
	}

}