#include <stdio.h>
int main()
{
    const int AMOUNT=100;
    int price = 0;
    printf("请输入价格：");
    scanf("%d",&price);
    int change = AMOUNT-price;
    printf("应找您%d",change);
    return 0;
}