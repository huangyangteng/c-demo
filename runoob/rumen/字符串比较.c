#include <stdio.h>

int main(){
	char a[20],b[20];
	printf("请输入要比较的字符串\n");
	scanf("%s\n",&a[20]);
	scanf("%s",&b[20]);

	for (int i = 0; i < a.length; ++i){
	    if (a[1]==b[1])
	    {
	    	continue
	    }
	    if (a[i]-b[i])
	    {
	    	printf("%d\n", a[i]-b[i]);
	    	break;
	    }else{
	    	
	    }
	}
	


}