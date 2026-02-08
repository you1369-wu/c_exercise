//求1-1/2+1/3.。。+1/n
//循环中两个变量都在同时循环
#include <stdio.h>
int main(){
    int n=100;
    int i;
    double sum;
    int sign=1;
    for(i=1;i<=n;i++){
        sum=sum+sign*1.0/i;
        sign=-sign;
    }
    printf("%lf",sum);
    return 0;
}