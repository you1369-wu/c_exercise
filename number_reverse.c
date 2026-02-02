//求一个整数的逆序
//%10是求得这个整数的最后一位数字
///10是把这个整数的最后一位数字去掉
#include <stdio.h>
int main()
{
    int num=0;
    int reverse=0;
    printf("请输入一个整数,我将对它求逆数：");
    scanf("%d",&num);
    while(num>0){
        int digit = num % 10; //得到最后一位数字
        reverse = reverse * 10 + digit; //把这个数字加到逆序数的最后一位,700-7
        printf("num=%d,digit=%d,reverse=%d\n",num,digit,reverse);
       // printf("%d",digit); //打印当前得到的最后一位数字700-007
        num = num/10; //把原整数的最后一位去掉
    }
    printf("这个整数的逆序是%d\n",reverse);
    return 0;
}