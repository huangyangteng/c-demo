#include <stdio.h>


#define MONEY   10000

int main()
{
        double a_total = MONEY, b_total = MONEY;
        int count = 0;

        do
        {
                a_total += MONEY * 0.1;
                b_total += b_total * 0.05;
                count++;
        } while(a_total >= b_total);

        printf("%d年后，黑夜的投资额超过小甲鱼！\n", count);
        printf("小甲鱼的投资额是：%.2f\n", a_total);
        printf("黑夜的投资额是：%.2f\n", b_total);
}