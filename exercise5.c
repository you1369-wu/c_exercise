//身高换算
//c语言认为整数和整数运算只能得到整数，该整数将去掉小数点保留整数位数，而整数与浮点数运算得到浮点数
//方案1：把12改成浮点数12.0
//方案2，把英尺英寸改成浮点数double（双精度浮点数），对应printf（“%f”），scanf（“%lf”）
#include <stdio.h>
int main()
{
    double foot;
    double inch;
    printf("您的身高是几英尺？几英寸？");
    scanf("%lf %lf",&foot,&inch);
    double height=(foot+inch/12.0)*0.3048;
    printf("您的身高是%lfm",height);
    return 0;
}