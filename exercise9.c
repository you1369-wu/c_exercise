/*if语句练习--找零*/
#include <stdio.h>
int main()
{
    int price=0;
    int bill=0;
    printf("请输入商品价格和所付金额：");
    scanf("%d %d",&price,&bill);
    if(bill>=price){
        int change=bill-price;
        printf("应找回零钱：%d元\n",change);
    }
    else{
        printf("支付金额不足！\n");
    }
        return 0;
}