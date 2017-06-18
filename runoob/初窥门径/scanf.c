#include <stdio.h>

int main(){
	char c;
	int i,j;
    printf("请输入c,i,j\n");
	scanf("%c%d%x",&c,&i,&j);
	printf("变量c的值是%c\n",c );
	printf("变量i的值是%d\n",i );
	printf("变量j的值是%#X (%d)\n",j,j );

	return 0;
}