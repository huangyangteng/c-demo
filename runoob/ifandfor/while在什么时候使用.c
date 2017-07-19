#include <stdio.h>
#define MONEY 10000

int main()
{
	double a_totle=MONEY,b_totle=MONEY;
	int count=0;
	do
	{
		a_totle+=MONEY*0.1;
		b_totle+=b_totle*0.05;
		count++;
	}while(a_totle>=b_totle);
	printf("%d年后\n",count );
	printf("小甲鱼的投资额是%.2f\n",a_totle );
	printf("黑夜的投资额是%.2f\n",b_totle );
	return 0;
}





