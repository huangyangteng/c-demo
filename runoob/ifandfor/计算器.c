#include <stdio.h>
int main(){
	int a,b;
	char gan;
	float result;
	printf("请输入算式\n");
	scanf("%d %c %d",&a,&gan,&b);
	switch (gan)
	{
		case '+':result=a+b;break;
		case '-':result=a-b;break;
		case '*':result=a*b;break;
		case '/':if (b!=0)
		{
			result=(float)a/b;
			break;
		}else{
			printf("除数不能为0\n");
			break;
		}
	}
	printf("结果是：%.2f\n",result );
	return 0;
}