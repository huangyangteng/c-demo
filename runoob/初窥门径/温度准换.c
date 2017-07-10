#include <stdio.h>

int main()
{
    float t,T;
    printf("请输入要转化的华氏度\n");
    scanf("%f",&T);
    t=(T-32)*5/9;
    printf("转化为摄氏度为%.2f\n",t );
}