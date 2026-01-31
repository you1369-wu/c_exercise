//比较大小
#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    int max=b;
    if(a>b)
    {
        max=a;
    }
        printf("最大值为%d",max);
    return 0;
}