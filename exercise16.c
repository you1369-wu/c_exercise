//do-while循环：执行完一轮循环后，再判断条件是否成立，若成立则继续执行下一轮循环，否则结束循环。
//do{语句}while（条件）；
#include <stdio.h>
int main()
{
    int a=0;
    int n=0;
    printf("请输入一个整数：");
    scanf("%d",&a);
       do{
            a=a/10;//每次除以10，相当于把最后一位划掉2，因为整数除以整数结果去掉小数部分取整数
            n=n+1;
        } while(a>0);
    printf("该整数有%d位\n",n);
    return 0;
}