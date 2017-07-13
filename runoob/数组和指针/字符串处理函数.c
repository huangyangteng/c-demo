#include <stdio.h>
#include <string.h>
int main(){
	char a[]="helloworld";
	printf("%s\n", a);
	// strlen()函数获取字符串中字符的个数
	int b=strlen(a);
	printf("%d\n", b);
	// 拷贝字符串 strcpy和strncpy,要保证原来的数组能容纳要拷贝的数组
	char str1[]="hellohello";
	char str2[]="kittykittykitty";
	// printf("%s",strcpy(str1,str2));
	// 连接字符串 strcat,把后面的链接到前面
	strcat(str1,str2);
	printf("%s\n", str1);
	// 字符串比较
	if (!strcmp(str1,str2))
	{
		printf("两个字符串完全一致\n");
	}
}