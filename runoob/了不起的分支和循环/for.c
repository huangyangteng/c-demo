#include <stdio.h>
int main()
{
	int num;
	int flag=1;
	printf("输入一个数\n");
	scanf("%d",&num);


	for (int i = 2; i < num/2; i++)
	{
		if (num%i==0)
		{
			flag=0;
		}
	}
	if (flag)
		{
			printf("%d是素数\n",num );
		}else{
			printf("%d不是素数\n",num );
		}
}