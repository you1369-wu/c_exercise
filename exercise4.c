#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("请输入两个整数");
    scanf("%d %d",&a,&b);//scanf里前一个双引号内是要求你输入格式相同的东西
    printf("%d+%d=%d",a,b,a+b);
    return 0;
}