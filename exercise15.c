//输入一个数，计算这个数对应的位数
#include <stdio.h>
int main()
{
    int a=0;
    int n=0;
    printf("请输入一个整数：");
    scanf("%d",&a);
    a=a/10;
    n=n+1;
        while(a>0){
            a=a/10;//每次除以10，相当于把最后一位划掉2，因为整数除以整数结果去掉小数部分取整数
            n=n+1;
        }
    printf("该整数有%d位\n",n);
    return 0;
}