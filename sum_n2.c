//p52习题
#include <stdio.h>
int main(){
    int count=0;
    printf("请输入正整数n：");
    scanf("%d",&count);
    int i=1;
    double num=2.0;
    double sum=0.0;
    for(i=1;i<=count;i++){
        sum=sum+num;
        num=1+1/num;
    }
    printf("%.2f",sum);
    return 0;
}