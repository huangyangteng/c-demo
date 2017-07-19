#include <stdio.h>
#include <string.h>

#define NUM 5
int main()
{
	char slogon[NUM][100];
	int min,max,ch,temp,i,j;
	// 用户输入5句话，存放在数组里
	for ( i = 0; i < NUM; ++i)
	{
		printf("请输入第%d句话\n", i+1);
		for( j=0;(ch=getchar())!='\n';j++)
		{

			slogon[i][j]=ch;
		}
				slogon[i][j]='\0';

	}
	// 输出这五句话，并进行比较长短
	min=0;
	max=0;
	printf("您输入了以下五句话：\n");

	for ( i = 0; i < NUM; ++i)
	{
		printf("%d\n", i);
		printf("%s\n", slogon[i]);
		temp=strlen(slogon[i]);
		min=temp<strlen(slogon[min])? i:min;
		max=temp>strlen(slogon[max])? i:max;
	}
	printf("最长的是%s\n", slogon[max]);
	printf("最短的是%s\n", slogon[min]);
	return 0;
}