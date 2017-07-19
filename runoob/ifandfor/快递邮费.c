#include <stdio.h>
int main()
{
	int price=23;
	for (int i = 1; i <=20; ++i)
	{
		if (i==1)
		{
			printf("邮寄%d公斤花费%d元\n",i,price );
			continue;

		}
		price=14*(i-1)+price;
		printf("邮寄%d公斤花费%d元\n",i,price );
		price=23;
	}
}