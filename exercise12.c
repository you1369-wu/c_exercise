//超市打折
//在 C 语言中，如果在花括号 {} 里面定义变量，这个变量就只能在这个花括号里使用。
//你在 if 的 {} 里定义了 discount，一旦出了这个 {}，这个变量就被销毁了。
 #include <stdio.h>
 int main()
 {
    int price = 0;
    double discount = price;
    printf("请输入商品价格：");
    scanf("%d",&price);
    if(price>=1000){
        discount=0.8*price;
    }
    else if(price>=500){
        discount=0.85*price;
    }
    else if(price>=200){
        discount=0.9*price;
    }
    printf("打折后的价格是：%lf\n",discount);
    return 0;
 }