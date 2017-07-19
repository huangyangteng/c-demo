#include <stdio.h>

int main()
{
	int capitalNum=0,ch;
	printf("请输入一个英语句子\n");
	while ((ch=getchar())!='\n'){
		if (ch>='A'&&ch<='Z')
		{
			capitalNum+=1;
		}
	}
	printf("您输入了%d个大写字母\n",capitalNum);
	return 0;
}