#include <stdio.h>

#define NUM 5

int main()
{
        char slogans[NUM][100] = {
                "I love FishC.com!",
                "Keep moving!",
                "Impossible is nothing!",
                "Just do it!",
                "I am what I am!"};
        int i;
        int a[2][2]={1,2,3,4};
        printf("%ld\n", sizeof(a)/sizeof(a[0][0]));

        for (i = 0; i < NUM; i++)
        {
                printf("%s\n", slogans[i]);
        }

        return 0;
}