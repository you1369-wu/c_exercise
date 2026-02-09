//求两个数的最大公约数
//方法1：枚举法
/*
#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    int gcb=1;
    printf("请输入两个整数a，b：");
    scanf("%d""%d",&a,&b);
    int i=1;
    int min = fmin(a,b);
    for (i=1;i<=min;i++){
        if (a%i==0){
            if(b%i==0){
                gcb=i;
            }
        }
    }
printf("gcb=%d",gcb);
    return 0;
}
*/
//方法2：辗转相除法
#include <stdio.h>
int main(){
    int a,b,t;
    printf("请输入两个整数a，b：");
    scanf("%d""%d",&a,&b);
    while(b!=0){
        t=a;
        a=b;
        b=t%b;
        printf("a=%d,b=%d",a,b);
    }
    printf("gcd=%d",a);
    return 0;
}