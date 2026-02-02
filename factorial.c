#include <stdio.h>
int main()
{
    int num=0;
    int fact = 1;
    int i=0;
    printf("请输入一个整数,我将对它求阶乘：");
    scanf("%d",&num);
    for (i=2;i<=num;i++){
        fact=fact*i;
    }
    printf("这个数的阶乘是%d",fact);
    return 0;
}