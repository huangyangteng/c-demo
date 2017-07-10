#include <stdio.h>
int main(){
	int year;
	printf("请输入一个年份\n");
	scanf("%d",&year);
	for (int i = 0; i < 12; ++i)
	{
		// 闰年
		if (year%4==0){
			if (i==1)
			{
				printf("%d月份:29天\n", i+1);
			}else if (i==0||i==2||i==4||i==6||i==7||i==9||i==11)
			{
				printf("%d月份:31天\n",i+1 );
			}else{
				printf("%d月份：30天\n", i+1);
			}

		}
        // 非闰年
		if (year%4!=0){
			if (i==1)
			{
				printf("%d月份:28天\n", i+1);
			}else if (i==0||i==2||i==4||i==6||i==7||i==9||i==11)
			{
				printf("%d月份:31天\n",i+1 );
			}else{
				printf("%d月份：30天\n", i+1);
			}

		}
					
	}
}