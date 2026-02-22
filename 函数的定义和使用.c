//sum函数的定义和使用
#include <stdio.h>
//编写求和函数并打印和
//函数的调用必须是：函数名（）
//函数头中声明需要传入的参数，则在函数中无需再定义
//函数名之前的void表示不用传出东西。
void sum(int begin,int end){
        int i;
        int sum=0;
        for(i=begin;i<=end;i++){
            sum=sum+i;
        }
    printf("sum=%d",sum);
    }
int main(){
    sum(10,20);
    sum(20,30);
}