#include <stdio.h>

int main()
{
	char isRain,isFree;
	printf("是否有空？（Y/N）\n");
	scanf("%c",&isFree);
	getchar();//过滤掉回车，防止代码出现bug;

	if (isFree=='Y')
	{
		printf("是否下雨?（Y/N）\n");
		scanf("%c",&isRain);
		if (isRain=='Y')
		{
			printf("记得带伞啊\n");
		}
		else{
			printf("玩的愉快\n");
		}
	}
	else{
		printf("女神没空\n");
	}
	return 0;
}