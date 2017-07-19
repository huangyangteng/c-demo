#include <stdio.h>
#define NUM 10
int main(){
	int s[NUM];
	int i,sum=0;
	for (int i = 0; i < NUM; ++i)
	{
		printf("请输入%i个同学的数学成绩\n"，);
		scanf("%d",&s[i]);
		printf("第%d个同学的成绩是%d\n",i+1,s[i]);
			}
	return 0;

}