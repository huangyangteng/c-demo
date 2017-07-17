#include <stdio.h>

int main()
{
	char first[100],second[100];
	printf("请输入第一个字符串\n");
	scanf("%s",&first);
	printf("请输入第二个字符串\n");
	scanf("%s",&second);

	for (int i = 0; i < strlen(first); ++i)
	{
		if (first[i]==second[i])
		{
			continue;
		};
		if (first[i]!=second[i])
		{
			return result=first[i]-second[i];
		}

	}
}