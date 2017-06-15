#include <stdio.h>

int main()
{
	int ch;
	printf("请输入一个英语句子\n");
	while ((ch=getchar())!='\n'){
		if (ch>='A'&&ch<='Z')
		{
			ch=ch-'A'+'a';
		}else if(ch>='a'&&ch<='z'){
			ch=ch-'a'+'A';
		}
		putchar(ch);
	}
	putchar('\n');
	return 0;
}