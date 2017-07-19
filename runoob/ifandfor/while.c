#include <stdio.h>

int main()
{
	int i=1,result=0;
	while(i<101){
		result=result+i;
		i=i+1;
	}
	printf("%d\n",result);
	// 统计输入的英语句子的字符
	int count=0;
	printf("请随意输入一个英语句子\n");
	while(getchar()!= '\n'){
		count=count+1;
	}
	printf("你总共输入了%d个字符\n",count );
	
}