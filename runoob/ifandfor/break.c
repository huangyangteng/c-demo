#include <stdio.h>
int main()
{
	long long num;
	int flag=1;
	printf("输入一个数\n");
	scanf("%lld",&num);


	for (int i = 2; i < num/2; i++)
	{
		if (num%i==0)
		{
			flag=0;
			break;
		}
	}
	if (flag)
		{
			printf("%lld是素数\n",num );
		}else{
			printf("%lld不是素数\n",num );
		}
}