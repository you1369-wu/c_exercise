#include <stdio.h>
int main()
{
    int price = 0;
    printf("请输入商品价格：");
    scanf("%d",&price);
    int change=100-price;
    printf("应找您：%d元",change);
    return 0;
}